class Solution
{
public:
 int arraySign(vector<int> &nums)
 {
  int negative = 0;
  for (auto i : nums)
  {
   if (i == 0)
   {
    return 0;
   }
   if (i < 0)
   {
    negative += 1;
   }
  }
  if (negative % 2 == 0)
  {
   return 1;
  }
  else
  {
   return -1;
  }
 }
};
