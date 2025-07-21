class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        // Your code goes here
        
        priority_queue<long long> pq1, pq2;
        for (int i=0;i<N;i++){
            pq1.push(A[i]);
            if (pq1.size()>K1) pq1.pop();
            pq2.push(A[i]);
            if (pq2.size()>K2) pq2.pop();
        }
        
        long long k1 = pq1.top();
        long long k2 = pq2.top();
        
        
        long long sum = 0;
        for (int i=0;i<N;i++){
            if (A[i]>k1 && A[i]<k2) sum+=A[i];
        }
        
        return sum;
            
    }
};