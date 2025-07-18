class Solution {
  public:
    void inorder(Node* root, vector<int>& ans){
        if (!root) return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    vector<int> printNearNodes(Node *root, int low, int high) {
        // code here
        vector<int> arr;
        inorder(root, arr);
        vector<int> ans;
        for (int i=0;i<arr.size();i++){
            if (arr[i]>=low && arr[i]<=high) ans.push_back(arr[i]);
        }
        return ans;
    }
};