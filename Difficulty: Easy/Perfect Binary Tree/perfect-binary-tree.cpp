/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    bool isPerfect(Node *root) {
        // code here
        queue<Node*> q;
        int level=0;
        if (!root) return false;
        q.push(root);
        
        while (!q.empty()) {
            int calculated = pow(2, level);
            int size=q.size();
            if (size!=calculated) return false;
            
            for (int i=0;i<size;i++){
                Node* front = q.front();
                q.pop();
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
            }
            level++;
        }
        return true;
    }
};