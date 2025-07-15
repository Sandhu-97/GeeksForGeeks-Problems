/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:

    // Return the level (0-indexed) with maximum number of nodes.
    int maxNodeLevel(Node *root) {
        // Add your code here
        
        queue<Node*> q;
        int ans =0;
        int maxi =0;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int count=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                Node* front = q.front();
                q.pop();
                count++;
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
            }
            if (count>maxi) {
                ans=level;
                maxi=count;
            }
            level++;
        }
        return ans;
    }
};