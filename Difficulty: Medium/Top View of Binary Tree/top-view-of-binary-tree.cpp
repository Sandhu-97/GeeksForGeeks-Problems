/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        queue<pair<Node*, int>> q;
        vector<int> ans;
        if (!root) return{};
        q.push({root, 0});
        map<int, int> mp;
        
        while (!q.empty()){
            int size=q.size();
            for (int i=0;i<size;i++){
                Node* front = q.front().first;
                if (front->left) q.push({front->left, q.front().second-1});
                if (front->right) q.push({front->right, q.front().second+1});
                if (!mp.count(q.front().second)) mp[q.front().second] = front->data;
                q.pop();
                
            }
        }
        
        for (auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};