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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *cur, *del;
        cur = new ListNode();
        cur->next = head;
        while(cur->next) {
            if(cur->next->val == val) {
                del = cur->next;
                if(cur->next == head) 
                    head = head->next;
                cur->next = cur->next->next;
                delete del;
            } else cur = cur->next;
        }
        return head;
    }
};
