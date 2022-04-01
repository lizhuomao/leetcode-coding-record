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
//8ms 8.2MB
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* result = NULL;
        while(head != NULL)
        {
            ListNode* p = new ListNode(0, NULL);
            p -> val = head -> val;
            p -> next = result;
            result = p;
            head = head -> next;
        }
        return result;
    }
};