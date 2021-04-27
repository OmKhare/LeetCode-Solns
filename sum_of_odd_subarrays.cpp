class Solution
{
public:
 int sumOddLengthSubarrays(vector<int> &arr)
 {
  int sum = 0;
  int c = 0;
  while (true)
  {
   for (int i = 0; i < arr.size(); i++)
   {
    if (i + c < arr.size())
    {
     for (int j = i; j < i + c + 1; j++)
     {
      sum += arr[j];
     }
    }
   }
   c += 2;
   if (c > arr.size())
   {
    break;
   }
  }
  return sum;
 }
};