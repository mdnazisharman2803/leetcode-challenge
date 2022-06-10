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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       ListNode* dummy = new ListNode(0, head);
        ListNode* prevptr = dummy;
        for (int i = 0; i < left - 1; i++)
            prevptr = prevptr->next;
        ListNode* currptr = prevptr->next;
        for (int i = 0; i < right - left; i++) {
            ListNode* nextptr = currptr->next;
            currptr->next = nextptr->next;
            nextptr->next = prevptr->next;
            prevptr->next = nextptr;
        }
        return dummy->next;
    }
};