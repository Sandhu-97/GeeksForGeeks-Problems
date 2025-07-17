class Solution {
  public:
    // Function to find the nodes that are common in both BST.
    
    void inorder(Node* root, vector<int>& ans){
        if (!root) return;
        
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    vector<int> findCommon(Node *r1, Node *r2) {
        // Your code here
        vector<int> arr1;
        vector<int> arr2;
        inorder(r1, arr1);
        inorder(r2, arr2);
        
        vector<int> ans;
        int i=0;
        int j=0;
        
        while (i<arr1.size() && j<arr2.size()){
        
            if (arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
            else if(arr1[i] < arr2[j]) i++;
            else j++;
            
        }
        
        return ans;
    }
};