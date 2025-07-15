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
    vector<int> nodesAtOddLevels(Node *root) {
        // code here
        if (!root) return {};
        vector<int> res;
        int count=1;
        queue<Node*> q;
        
        q.push(root);
        
        while (!q.empty()){
            int size = q.size();
            for (int i=0;i<size;i++){
                Node* front = q.front();
                q.pop();
                if (count%2) res.push_back(front->data);
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
            }
            count++;
        }
        return res;
        
    }
};