/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n == 1)
        {
            return 1;
        }
        else if (n == 2)
        {
            return 2;
        }
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i-2] + dp[i-1];
        }
        return dp[n];
    }
};
// @lc code=end

