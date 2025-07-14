/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    void inorder(Node* root, int& sum){
        if (!root) return;
        sum+=root->data;
        inorder(root->left, sum);
        inorder(root->right, sum);
        
    }
    int sumBT(Node* root) {
        // code here
        int sum=0;
        inorder(root, sum);
        return sum;
        
    }
};