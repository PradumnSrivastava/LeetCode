// Single Number
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 0, ans = nums[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                count++;
            }
            else if (nums[i] != nums[i + 1] && count == 0)
            {

                ans = nums[i];
            }
            else
            {
                count = 0;
            }
        }
        return ans;
    }
};