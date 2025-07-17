// Function to search a node in BST.
class Solution {

  public:
  
    void solve(Node* root, int& x, int& maxi){
        if (!root) return;
        if (root->data<=x) {
            maxi=max(maxi, root->data);
        }
        if (root->data>x) solve(root->left, x, maxi);
        else solve(root->right, x, maxi);
    }
    int floor(Node* root, int x) {
        // Code here
        int maxi=INT_MIN;
        solve(root, x, maxi);
        return maxi==INT_MIN? -1: maxi;
    }
};