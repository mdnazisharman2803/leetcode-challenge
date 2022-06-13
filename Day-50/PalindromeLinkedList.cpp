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
    bool isPalindrome(ListNode* head) {
         ListNode* fast=head, *slow=head, *prev=nullptr;
        while(fast && fast->next){
            fast=fast->next->next;      
            ListNode* tmpnext=slow->next;
            slow->next=prev;
            
            prev=slow;
            slow=tmpnext;            
        }
        slow = fast? slow->next : slow;  
        while(slow){
            if(prev->val!=slow->val)
                return false;
            slow=slow->next;
            prev=prev->next;
        }
        
        return true;
    }
};