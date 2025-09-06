/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node *fast = head, *slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow){
                break;
            }
        }
        if(!fast || !fast->next) return 0;
        int count =1;
        fast=fast->next;
        while(fast!=slow){
            fast=fast->next;
            count++;
        }
        return count;
        
    }
};