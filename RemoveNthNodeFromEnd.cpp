// Given a linked list, remove the nth node from the end of list and return its head.

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // to store prev
        ListNode *dummy = new ListNode(0); dummy->next = head;
        
        ListNode *f=dummy, *s=dummy;
        for (; n>0 && s; n--) s=s->next;
        if (n>0) return head;
         
        while (s->next) { 
            f = f->next; s = s->next; 
        }
        
        f->next = f->next->next;
        return dummy->next;
    }
};
