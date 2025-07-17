/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
void inorder(Node* root, vector<int>& ans){
    if (!root) return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
float findMedian(struct Node *root) {
    // Code here
    vector<int> ans;
    inorder(root, ans);
    int n = ans.size();
    
    if (n%2==0){
        return (ans[n/2]+ans[n/2-1]) /2.0;
    }
    else return ans[n/2];
}