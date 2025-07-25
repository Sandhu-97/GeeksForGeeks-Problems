/*
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
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void inorder(Node* root, vector<int>& arr){
        if (!root) return;
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> arr1, arr2, ans;
        inorder(root1, arr1);
        inorder(root2, arr2);
        
        int i=0;
        int j=0;
        
        while (i<arr1.size() && j<arr2.size()){
            if (arr1[i] <= arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i] > arr2[j]){
                ans.push_back(arr2[j]);
                j++;
            }
        }
        
        
        while (i<arr1.size()){
            ans.push_back(arr1[i]);
            i++;
        }
        
        while (j<arr2.size()){
            ans.push_back(arr2[j]);
            j++;
        }
        
        return ans;
        
    }
};