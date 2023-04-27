// Build Array from Permutation
class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> Ans;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            Ans.push_back(nums[nums[i]]);
        return Ans;
    }
};