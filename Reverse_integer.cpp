class Solution
{
public:
 int reverse(int x)
 {
  int num = 0;
  while (x)
  {
   if (num > INT_MAX / 10 || num < -2147483648 / 10 && x != 0)
   {
    return 0;
   }
   num += num*10 + x % 10;
   x = x / 10;
  }

  return int(num);
 }
};
