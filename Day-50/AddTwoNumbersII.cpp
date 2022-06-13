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
   int helper(ListNode*l1,ListNode*l2){
        if(!l1&&!l2){
            return 0;
        }
       int carry= helper(l1->next,l2->next);
       int value=l1->val+l2->val+carry;
        l1->val=value%10;
        return value/10;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*h1=l1,*h2=l2;
        while(h1&&h2){
            h1=h1->next;
            h2=h2->next;
        }
        
        if(h1){
            ListNode*temp=new ListNode(0);
            ListNode*t=temp;
        h1=h1->next;
            while(h1){
                ListNode*v=new ListNode(0);
                h1=h1->next;
                temp->next=v;
                temp=v;
            }
            temp->next=l2;
            l2=t;
            
        }
        if(h2){
            ListNode*temp=new ListNode(0);
            ListNode*t=temp;
        h2=h2->next;
            while(h2){
                ListNode*v=new ListNode(0);
                h2=h2->next;
                temp->next=v;
                temp=v;
            }
            temp->next=l1;
            l1=t;
            
        }
        int carry=helper(l1,l2);
        if(carry){
            ListNode*temp=new ListNode(carry);
            temp->next=l1;
            l1=temp;
                
        }
        return l1;
    }
};