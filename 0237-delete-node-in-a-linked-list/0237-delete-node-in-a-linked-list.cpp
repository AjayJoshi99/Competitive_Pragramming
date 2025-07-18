/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *ptr = node;
        while(ptr->next->next != nullptr){
            ptr->val = ptr->next->val;
            ptr = ptr->next;
        }
        ptr->val = ptr->next->val;
        ptr->next = nullptr;
    }
};