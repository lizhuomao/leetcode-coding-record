/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//8ms 7.4MB
class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        ListNode* p = node;
        *p = *p -> next;
        return;
    }
};