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
    ListNode* swapPairs(ListNode* head) {
         if(head==NULL || head->next==NULL)
        return head;
    ListNode* temp= head;
    int size = 0;
    
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    
    if(size < 2){
        return head;
    }  
        
    ListNode* prevptr=NULL;
    ListNode* currptr=head;
    ListNode* nextptr=NULL;

    int count=0; 
        // to reverse first 2 node then after it apply recursion
    while(currptr!=NULL&&count<2){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(count<2) return head; 
     
    if(nextptr!=NULL){
     head->next= swapPairs(nextptr);
    }

    return prevptr;
    }
};