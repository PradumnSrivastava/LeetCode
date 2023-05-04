// Add Two Numbers
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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *res = new ListNode(0);
        ListNode *temp = res;
        int sum = 0, carry = 0;
        while (l1 || l2)
        {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            temp->next = new ListNode(sum % 10);
            carry = sum / 10;
            temp = temp->next;
            l1 = (l1 ? l1->next : NULL);
            l2 = (l2 ? l2->next : NULL);
        }
        if (carry)
        {
            temp->next = new ListNode(carry);
        }
        return res->next;
    }
};