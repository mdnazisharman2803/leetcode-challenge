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
    ListNode* reverseKGroup(ListNode* head, int k) {
      if(head==NULL || head->next==NULL || k==1)
        return head;
    ListNode* temp= head;
    int size = 0;
    
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    
    if(size < k){
        return head;
    }  
        
    ListNode* prevptr=NULL;
    ListNode* currptr=head;
    ListNode* nextptr=NULL;

    int count=0; 
        // to reverse first k node then after it apply recursion
    while(currptr!=NULL&&count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(count<k) return head; 
     
    if(nextptr!=NULL){
     head->next= reverseKGroup(nextptr,k);
    }

    return prevptr;
    }
};