/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        queue<Node*> q;
        if (!root) return {};
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            for (int i=0;i<size;i++){
                Node* front  = q.front();
                q.pop();
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
                
                if (i==0) ans.push_back(front->data);
            }
        }
        return ans;
    }
};