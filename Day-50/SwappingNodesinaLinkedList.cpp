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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* prevptr= NULL,*currptr = head,*nextptr= head;
        for(int i = 1;i<k;i++){
            nextptr = nextptr->next;
        }
        prevptr = nextptr->next;
        while(prevptr){
            prevptr = prevptr->next;
            currptr = currptr->next;
        }
        swap(currptr->val,nextptr->val);
        return head; 
    }
};