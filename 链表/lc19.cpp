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
//4ms 10.4MB
//抄作业
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = new ListNode(0, head); //创建头节点
        int size = 0;
        while (head != NULL)
        {
            head = head -> next;
            size++;
        }
        ListNode* now = p;
        for (int i = 0; i < size - n; i++)
        {
            cout << now->val;
            now = now -> next;
        }
        now -> next = now -> next -> next;
        ListNode* result = p -> next;
        delete p;
        return result;
    }
};