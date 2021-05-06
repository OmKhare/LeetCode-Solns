class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
      int mid = low + (high - low) / 2;
      // This proves to be better instead of mid = (low+high)/2 since (low+high) value can overflow.
      if (nums[mid] == target)
        return mid;
      else if (nums[mid] < target)
        low = mid + 1;
      else
        high = mid - 1;
    }
    return -1;
  }
};