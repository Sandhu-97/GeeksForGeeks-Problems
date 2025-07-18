/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    
    int count(Node* root){
        if (!root) return 0;
        return 1+count(root->left) + count(root->right);
    }
    
    bool isValidBST(Node* root, int mini, int maxi){
        if (!root) return true;
        
        if (root->data <=mini || root->data>=maxi) return false;
        
        return isValidBST(root->left, mini, root->data) && isValidBST(root->right, root->data, maxi);
    }
    int largestBst(Node *root) {
        // Your code here
        if (isValidBST(root, INT_MIN, INT_MAX)) return count(root);
        return max(largestBst(root->left), largestBst(root->right));
    }
};