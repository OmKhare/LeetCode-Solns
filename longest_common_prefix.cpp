class Solution
{
public:
 string longestCommonPrefix(vector<string> &strs)
 {
  string st = "";
  if (strs.size() == 0)
   return st;
  for (int i = 0; i < strs[0].size(); i++)
  {
   int j = 1;
   for (; j < strs.size() && strs[j].size() > i; j++)
   {
    if (strs[j][i] != strs[0][i])
    {
     return st;
    }
   }
   if (j == strs.size())
    st += strs[0][i];
  }
  return st;
 }
};