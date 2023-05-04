#include <math.h>
/**Definition for singly-linked list.*/
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        ListNode* temp = head;
        int sum = 0;
        int counter = 0;
        while (head != NULL)
        {
            counter++;
            head = head->next;
        }
        for (int index = counter-1; index >= 0; index--)
        {
            sum = pow(2,index)*temp->val + sum;
            temp = temp->next;
        }
        return sum;
        
    }
};
