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
 bool isPalindrome(ListNode *head)
 {
  ListNode *temp = head;
  stack<int> n;
  while (temp != NULL)
  {
   n.push(temp->val);
   temp = temp->next;
  }
  temp = head;
  while (!n.empty())
  {
   if (n.top() != temp->val)
    return false;
   n.pop();
   temp = temp->next;
  }
  return true;
 }
};