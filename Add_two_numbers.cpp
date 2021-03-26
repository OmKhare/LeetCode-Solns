#include <cmath>
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
  ListNode *ans = new ListNode;
  auto h1 = l1;
  auto h2 = l2;
  auto h = ans;
  int sum, carry;
  carry = 0;
  while (h1 != NULL || h2 != NULL)
  {
   sum = carry;
   if (h1 != NULL)
   {
    sum += h1->val;
    h1 = h1->next;
   }
   if (h2 != NULL)
   {
    sum += h2->val;
    h2 = h2->next;
   }
   carry = int(sum / 10);
   sum = sum % 10;
   ans->val = sum;

   ListNode *newNode = new ListNode;
   if (h1 != NULL || h2 != NULL)
   {
    ans->next = newNode;
    ans = ans->next;
   }
  }
  if (carry == 1)
  {
   ans->next = new ListNode(1);
  }

  return h;
 }
};