/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dp[nums.size()+1];
        int ans = INT_MIN;
        dp[0] = 0;
        for (size_t i = 1; i < nums.size()+1; i++)
        {
            /* code */
            dp[i] = max(nums[i-1], nums[i-1]+dp[i-1]);
            ans = max(dp[i],ans);
        }
        return ans;
        
    }
};
// @lc code=end

