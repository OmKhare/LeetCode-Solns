class Solution
{
public:
 bool isPalindrome(int x)
 {
  if (x < 0)
  {
   return false;
  }
  else if (x == 0)
  {
   return true;
  }
  else
  {
   long long rev = 0;
   int num = x;
   while (x != 0)
   {
    rev = rev * 10 + x % 10;
    x = x / 10;
   }
   if (rev == num)
   {
    return true;
   }
   else
   {
    return false;
   }
  }
 }
};