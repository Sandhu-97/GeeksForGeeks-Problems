/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};  */


void solve(Node* root, int input, int& c){
    if (!root) return;
    if (root->data >= input){
        c = min(root->data, c);
    }
    if (root->data > input) solve(root->left, input, c);
    else solve(root->right, input, c);
}
int findCeil(Node* root, int input) {
    // Your code here
    int c=INT_MAX;
    solve(root, input, c);
    return c==INT_MAX? -1: c;
}