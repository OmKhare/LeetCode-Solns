class Solution
{
public:
 vector<int> minOperations(string boxes)
 {
  int n = boxes.size();
  vector<int> ans(n, 0);
  int leftcount = 0;
  int leftscore = 0;
  int rightcount = 0;
  int rightscore = 0;
  for (int i = 1; i < n; i++)
  {
   if (boxes[i - 1] == '1')
   {
    leftcount++;
   }
   leftscore += leftcount;
   ans[i] = leftscore;
  }
  for (int j = n - 2; j >= 0; j--)
  {
   if (boxes[j + 1] == '1')
   {
    rightcount++;
   }
   rightscore += rightcount;
   ans[j] += rightscore;
  }
  return ans;
 }
};