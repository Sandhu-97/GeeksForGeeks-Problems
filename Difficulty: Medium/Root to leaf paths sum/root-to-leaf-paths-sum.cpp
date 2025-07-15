/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
    void solve(Node* root, int& sum, int current){
        if (!root) {
            return;
        }
        current = current*10+root->data;
        if (!root->left && !root->right){
            sum+=current;
            return;
        }
        solve(root->left, sum, current);
        solve(root->right, sum, current);
        
    }
    int treePathsSum(Node *root) {
        // code here.
        int sum=0;
        solve(root, sum, 0);
        return sum;
    }
};