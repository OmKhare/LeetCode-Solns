/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
 TreeNode *temp1 = new TreeNode();
 TreeNode *temp = temp1;

 void solve(TreeNode *root)
 {
  if (root == NULL)
  {
   return;
  }
  solve(root->left);
  TreeNode *temp2 = new TreeNode();
  temp2->val = root->val;
  temp1->right = temp2;
  temp1->left = NULL;
  temp1 = temp1->right;
  solve(root->right);
 }

 TreeNode *increasingBST(TreeNode *root)
 {
  solve(root);
  return temp->right;
 }
};