// Author: Mohit Bhatia

/* 
Given a sorted linked list, delete all duplicates such that each element appear only once.
*/

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
    ListNode* deleteDuplicates(ListNode* head) {
       
        ListNode* del = head;

        while(del && del->next) {
            if(del->val == del->next->val) {
                    del->next = del->next->next;
                    continue;
                }
            
            del = del->next;
        }
            

        return head;
    }
};
