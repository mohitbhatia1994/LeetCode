// Author : Mohit Bhatia

/*
 * Remove all elements from a linked list of integers that have value val.
 */

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(-1);
        dummy.next = head;
        ListNode *p = &dummy;
        
        while(p->next) // Same as p->next != NULL
        {
            if (p->next->val == val) {
                p->next = p->next->next;
            }else{
                p = p->next;
            }
        }
        return dummy.next;
    }
};

