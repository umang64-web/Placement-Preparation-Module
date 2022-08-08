/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = nums[0], maxsum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            sum = max(nums[i], sum + nums[i]);
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};
// @lc code=end
