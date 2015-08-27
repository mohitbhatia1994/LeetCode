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
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* pre = NULL;
        ListNode* nex;
        
        while(current != NULL) {
            nex = current->next;
            current->next = pre;
            pre = current;
            current = nex;
        }
        
        return pre;
    }
};
