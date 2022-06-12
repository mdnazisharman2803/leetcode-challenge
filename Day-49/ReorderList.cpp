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
ListNode* midelemnentlater(ListNode* head){
    
    ListNode* fast=head;
    ListNode* slow=head;
    while(fast!=NULL && fast->next !=NULL){
        fast=fast->next->next;
        slow=slow->next;
        
    }

    
    return slow;
}
ListNode* reverseiterative(ListNode* temp){

    ListNode* prevptr=NULL;
    ListNode* currptr=temp;
    ListNode* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    
    return prevptr;

}
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
        return;
    }
    ListNode*first=head;
    ListNode*mid=midelemnentlater(head);
    
     ListNode*temp=mid->next;

     mid->next=NULL;
     
    ListNode*last=reverseiterative(temp);
 
  
    ListNode*firstkanext=NULL;
    ListNode*lastkanext=NULL;
    while(last!=NULL){

         firstkanext=first->next;
        lastkanext=last->next;

        //folding
        first->next=last;
        last->next=firstkanext;

        //move
        first=firstkanext;
        last=lastkanext;

    }
  

    return;
    }
};