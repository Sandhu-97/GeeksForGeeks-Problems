/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node* merge(Node* head1, Node* head2){
        if (!head1) return head2;
        if (!head2) return head1;
        
        if (head1->data < head2->data){
            head1->bottom = merge(head1->bottom, head2);
            return head1;
        }
        else {
            head2->bottom = merge(head1, head2->bottom);
            return head2;
        }
    }
    Node *flatten(Node *root) {
        // Your code here
        if (!root) return root;
        root->next = flatten(root->next);
        return merge(root, root->next);
        
    }
};