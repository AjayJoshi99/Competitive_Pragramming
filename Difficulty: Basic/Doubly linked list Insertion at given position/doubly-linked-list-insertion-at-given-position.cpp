/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        Node *node = new Node(data);
        if(head == nullptr){
            return node;
        }
        
        Node *ptr = head;
        while(pos-- && ptr != nullptr){
            ptr = ptr->next;
        }
        if (ptr == nullptr) {
            delete node;
            return head;
        }
        
        if(ptr->next == nullptr){
            ptr->next = node;
            node->prev = ptr;
        }else{
            Node *temp = ptr->next;
            ptr->next = node;
            node->prev = ptr;
            node->next = temp;
            temp->prev = node;
        }
        return head;
    }
};