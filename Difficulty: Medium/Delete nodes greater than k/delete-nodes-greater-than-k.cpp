/*The node structure
struct Node {
int data;
Node * right, * left;
};*/

class Solution {
  public:
    /*The function should return the root of the modified tree*/
    
    void inorder(Node* root, int k, vector<int>& ans){
        if (!root) return;
        inorder(root->left, k, ans);
        if (root->data<k) ans.push_back(root->data);
        inorder(root->right, k ,ans);
    }
    
    Node* construct(const vector<int>& arr, int start, int end){
        if (start>end) return nullptr;
        int mid = end+(start-end)/2;
        Node* newnode = new Node(arr[mid]);
        newnode->left = construct(arr, start, mid-1);
        newnode->right = construct(arr, mid+1, end);
        return newnode;
        // return new Node(arr[mid], construct(arr, start, mid-1), construct(arr, mid+1, end));
    }
    Node* deleteNode(Node* root, int k) {
        // Your code here
        vector<int> ans;
        inorder(root, k, ans);
        
        return construct(ans, 0, ans.size()-1);
        
        
    }
};