// Search Insert Position
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int ans;
        while (start <= end)
        {
            ans = (start + end) / 2;
            if (nums[ans] == target)
            {
                return ans;
            }
            else if (nums[ans] > target)
            {
                end = ans - 1;
            }
            else
            {
                start = ans + 1;
            }
        }
        return start;
    }
};