// Source : https://oj.leetcode.com/problems/
// Author : Mohit Bhatia

// Given a linked list, determine if it has a cycle in it.

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
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        if (head == NULL)
            return false;
        if (head->next == head) {
            return true;
        }
        
        while  (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) 
                return true;
        }
        return false;
        
    }
};
