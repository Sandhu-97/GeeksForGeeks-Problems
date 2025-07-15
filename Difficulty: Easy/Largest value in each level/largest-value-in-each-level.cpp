// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
        queue<Node*> q;
        vector<int> ans;
        if (!root) return ans;
        
        q.push(root);
        
        while (!q.empty()){
            int size=q.size();
            int maxi = INT_MIN;
            for (int i=0;i<size;i++){
                Node* front = q.front();
                q.pop();
                maxi=  max(maxi, front->data);
                
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
            }
            ans.push_back(maxi);
            
        }
        return ans;
        
    }
};