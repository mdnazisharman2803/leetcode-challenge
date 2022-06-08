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
      int length(ListNode *head){
    int count =0;
    while(head != NULL){
        count++;
        head= head->next;
    }
    return count;
}
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = length(head);
    if(l<n){
        return head;
    }
    int k = l-n+1;                   
    if(k == 1){                      
        head = head->next;
        return head;
    }
    ListNode* headTemp = head;
     ListNode* back = NULL;
    ListNode* front = NULL;
    while(k>1){                           
        back = headTemp;
        headTemp = headTemp->next;
        front = headTemp->next;
        k--;
    }
    delete headTemp;
    back->next = front;
    return head;
    }
};