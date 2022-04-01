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
//236ms 145.2MB
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        ListNode* hp = head;
        ListNode* copy = new ListNode(0, NULL);
        while(hp != NULL)
        {
            ListNode* p = new ListNode(0, NULL);
            p -> val = hp -> val;
            p -> next = copy -> next;
            copy -> next = p;
            hp = hp -> next;
        }
        while(head != NULL && copy -> next != NULL)
        {
            if (head -> val != copy -> next -> val) return false;
            head = head -> next;
            copy = copy -> next;
        }
        return true;
    }
};