/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        if((head->data) > data){
            insertBegin(head,data);
        }else{
            insertMiddle(head,data);
        }
        return head;
    }
    
    void insertBegin(Node* &head, int data){
        Node* ptr = head;
        while(ptr->next != head){
            ptr = ptr->next;
        }
        insert(ptr, head, data);
        head = ptr->next;
    }
    
    void insertMiddle(Node* head, int data){
       Node* prev = head;
       Node* curr = head->next;
       while(curr != head && curr->data < data ){
           prev=prev->next;
           curr=curr->next;
       }
       insert(prev, curr, data);
    }
    
    void insert(Node* prev, Node* next, int data){
        Node* node = new Node(data);
       node->next = next;
       prev->next = node;
    }
    
};