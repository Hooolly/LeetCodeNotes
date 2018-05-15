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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL)
            return NULL;
         if (l1 == NULL)
            return l2;
         if (l2 == NULL)
            return l1;
        ListNode *p1 = l1;
        ListNode *q = new ListNode(-1);
        ListNode *p2 = l2;
        ListNode *p = q;
        int sum = 0;
        while (p1 != NULL || p2 != NULL)
        {
            sum = sum / 10;
            if (p1 != NULL)
            {
                sum = sum + p1->val;
                p1 = p1->next;
            }
            if (p2 != NULL)
            {
                sum = sum + p2->val;
                p2 = p2->next;
            }
            p->next = new ListNode(sum % 10);
            p = p->next;
        }
        if (sum / 10 == 1)
            p->next = new ListNode(1);
        return q->next;
    }
};
    
