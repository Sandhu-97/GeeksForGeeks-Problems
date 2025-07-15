/*

Definition for Binary Tree Node
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
    void solve(Node* root, vector<int>& temp, vector<vector<int>>& res){
        if (!root) return;
        temp.push_back(root->data);
        if (!root->left && !root->right){
            res.push_back(temp);
            temp.pop_back();
            return;
        }
        
        solve(root->left, temp, res);
        solve(root->right, temp, res);
        temp.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
       vector<vector<int>> res;
       vector<int> temp;
       
       solve(root, temp, res);
       return res;
    }
};