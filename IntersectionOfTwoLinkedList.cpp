//Author: Mohit Bhatia

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int l1 = getListLength(headA);
       int l2 = getListLength(headB);
       int diff = abs(l1 - l2);
       int smaller = min(l1,l2);
       if(l1 <= 0 || l2 <= 0) return NULL;
       if(l1 > l2) {
            for (int i=0; i<diff; i++){
                headA = headA->next;
            }
       } 
       else if ( l2 > l1) {
           for (int i=0; i<diff; i++){
                headB = headB->next;
            }
       }
        
        for(int i = 0; i < smaller;i++) {
            if(headA->val == headB->val) {return headA;}
            headA = headA->next;
            headB = headB->next;
        }  
        return NULL;
        
    }
    
    private:    
        inline int getListLength(ListNode *head){
            int len=0;
            while(head!=NULL){
                head = head->next;
                len++;
            }
            return len;
        }
};
