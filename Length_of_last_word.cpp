class Solution
{
public:
 int lengthOfLastWord(string s)
 {
  int end = s.length() - 1;
  int len = 0;
  while (end >= 0 && s[end] == ' ')
  {
   end--;
  }
  while (end >= 0 && s[end] != ' ')
  {
   end--;
   len++;
  }
  return len;
 }
};