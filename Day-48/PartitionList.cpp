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
    ListNode* partition(ListNode* head, int x) {
    ListNode* l1 = new ListNode(0);
	ListNode* l2 = new ListNode(0);
	ListNode* currptr = l1;
	ListNode* nextptr = l2;

	// make 2 lists
	while (head) {
		if (head->val < x) {
			currptr->next = head;
			currptr = currptr->next;
		}
		else {
			nextptr->next = head;
			nextptr = nextptr->next;
		}
		head = head->next;
	}
	//connect 2 lists
	currptr->next = l2->next;
	nextptr->next = NULL;
	return l1->next;

    }
};