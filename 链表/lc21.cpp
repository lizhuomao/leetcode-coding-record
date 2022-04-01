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
//8ms 14.6MB
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* result = new ListNode(0, NULL);
        ListNode* current = result;
        while(list1 != NULL && list2 != NULL)
        {
            ListNode* p = new ListNode(0, NULL);
            if (list1 -> val < list2 -> val)
            {
                p -> val = list1 -> val;
                list1 = list1 -> next;
            }
            else
            {
                p -> val = list2 -> val;
                list2 = list2 -> next;
            }
            current -> next = p;
            current = current -> next;
        }
        if (list1 == NULL && list2 != NULL)
        {
            current -> next = list2;
        }
        if (list2 == NULL && list1 != NULL)
        {
            current -> next = list1;
        }
        return result -> next;
    }
};