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
    vector<int> bottomView(Node *root) {
        // Your Code Here
        queue<pair<Node*, int>> q;
        vector<int> ans;
        map<int,int> mp;
        
        q.push({root, 0});
        while(!q.empty()){
            
            Node* node = q.front().first;
            if (node->left) q.push({node->left, q.front().second-1});
            if (node->right) q.push({node->right, q.front().second+1});
            mp[q.front().second] = node->data;
            q.pop();
        }
        
        for (auto i: mp) ans.push_back(i.second);
        return ans;
    }
};