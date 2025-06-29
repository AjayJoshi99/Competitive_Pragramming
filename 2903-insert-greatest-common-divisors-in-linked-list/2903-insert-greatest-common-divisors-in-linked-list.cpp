/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode *ptr = head;
        while(ptr->next != nullptr){
            int val = helper(ptr->val, ptr->next->val);
            ListNode *node = new ListNode(val);
            ListNode *temp = ptr->next;
            ptr->next = node;
            node->next = temp;
            ptr = temp;
        }
        return head;
    }
    int helper(int a, int b){
        if(b==0) return a;
        return helper(b, a%b);
    }
};