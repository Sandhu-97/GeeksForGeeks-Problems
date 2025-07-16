/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root) {
        // Add your code here
        if (!root || (!root->left && !root->right)) return 1;
        
        int left = root->left? root->left->data: 0;
        int right = root->right? root->right->data: 0;
        
        if (left+right!=root->data) return 0;
        

        return isSumProperty(root->left) && isSumProperty(root->right);
    }
};