class Solution {
  public:

    double waterOverflow(int K, int R, int C) {
        // code here
        double a[K+1][K+1] = {0};
        a[0][0] = K;
        
        for (int i=0;i<R;i++){
            for (int j=0;j<=i;j++){
                if (a[i][j]>1.0){
                    double extra = a[i][j] - 1.0;
                    a[i][j] = 1.0;
                    a[i+1][j] += extra/2;
                    a[i+1][j+1] += extra/2;
                }
            }
        }
        
        return a[R-1][C-1];
    }
};