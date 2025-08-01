/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
  
    void solve(Node* root, int& count){
        if (!root) return;
        if (root->left || root->right) count++;
        solve(root->left, count);
        solve(root->right, count);
    }
    int countNonLeafNodes(Node* root) {
        // Code here
        int count=0;
        solve(root, count);
        return count;
    }
};