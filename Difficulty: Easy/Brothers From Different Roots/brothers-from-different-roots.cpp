/*Structure of the Node of the BST is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
    void inorder(Node* root, vector<int>& ans){
        if (!root) return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    int countPairs(Node* root1, Node* root2, int x) {
        vector<int> arr1, arr2;
        inorder(root1, arr1);
        inorder(root2, arr2);
        
        int i=0, j=arr2.size()-1;
        int count=0;
        
        while (i<arr1.size() && j>=0){
            int sum = arr1[i]+arr2[j];
            
            if (sum==x) {
                i++;
                j--;
                count++;
            }
            else if (sum<x) i++;
            else j--;
        }
        return count;
    }
};