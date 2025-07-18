// User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more
// than the max key in BST, return -1

void inorder(Node* root, vector<int>& ans){
    if (!root) return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
int sum(Node* root, int k) {

    // Your code here
    vector<int> ans;
    inorder(root, ans);
    int sum=0;
    for (int i=0;i<k;i++) sum+=ans[i];
    return sum;
}