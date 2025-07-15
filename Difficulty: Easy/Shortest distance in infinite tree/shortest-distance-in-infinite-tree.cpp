
class Solution {
  public:
    int distance(int x, int y) {
        // code here
        if (x==y) return 0;
        int count=0;
        while (x!=y){
            if (x>y) x/=2;
            else y/=2;
            count++;
        }
        return count;
    }
};