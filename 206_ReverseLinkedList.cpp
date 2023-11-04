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
    ListNode* reverseList(ListNode* head) {
        ListNode* reversed = nullptr;

        while(head != nullptr) {
            ListNode* newNode = new ListNode(head->val);

            if(reversed == nullptr)
                reversed = newNode;   
            else {
                newNode->next = reversed;
                reversed = newNode;
            }
            head = head->next;
        }
        return reversed;
    }
};
