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
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode* first = head;
        ListNode* sec = head;
        while (first != NULL && first->next != NULL)
        {
            first = first->next->next;
            sec = sec->next;
            if (first == sec)
            {
                sec = head;
                while (first != sec)
                {
                    first = first->next;
                    sec = sec->next;
                }
                return sec;
            }
        }
        return NULL;
    }
};
