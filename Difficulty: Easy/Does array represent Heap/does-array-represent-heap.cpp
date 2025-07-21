
class Solution {
  public:
    bool isMaxHeap(int arr[], int n) {
        // Your code goes here
        
        for (int i=0;i<n/2;i++){
            int top = arr[i];
            if (top<arr[2*i+1] || top<arr[2*i+2]) return false;
        }
        return true;
    }
};