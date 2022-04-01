/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//8ms 8MB
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode* hp = head;
        while(hp != NULL)
        {
            if (hp -> val == 100001) return true;
            hp -> val = 100001;
            hp = hp -> next;
        }
        return false;
    }
};