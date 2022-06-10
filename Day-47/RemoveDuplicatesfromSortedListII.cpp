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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* dummy = new ListNode(0, head);
        ListNode* currptr = dummy;
        ListNode* nextptr= head;
        
        while(nextptr != NULL) {
            if(nextptr->next != NULL && nextptr->val == nextptr->next->val){
                //skip the nodes whose values are equal to head.
                while(nextptr->next != NULL && nextptr->val == nextptr->next->val){
                    nextptr = nextptr->next;
                }
                currptr->next = nextptr->next;
            }
            else{
                currptr = currptr->next;
            }
            nextptr = nextptr->next;
        }
      
          return dummy->next;
    }
    
};