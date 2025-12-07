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
      ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if (!a) return b;
        if (!b) return a;
        ListNode dummy;
        ListNode* tail = &dummy;

        while (a && b) {
            if (a->val < b->val) {
                tail->next = a;
                a = a->next;
            } else {
                tail->next = b;
                b = b->next;
            }
            tail = tail->next;
        }
        tail->next = (a ? a : b);
        return dummy.next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;
        int n = lists.size();
        for ( int i = 1; i < n; i++) {
            lists[0] = mergeTwoLists(lists[i], lists[0]);
        }   
        return lists[0];
    }
};