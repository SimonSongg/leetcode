/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //dp[i]代表前i天最大利润，这个东西等于max(前一天前的最大利润,当天价格减去前面出现过的最低价格的差值)
        //dp[i] = max(dp[i-1],price[i]-minprice) 
        int dp[prices.size()+1];
        int minprice = 100000;
        if (prices.size() == 0) return 0;
        dp[0] = 0;
        for (int i=1;i<=prices.size();i++)
        {
            dp[i] = max(dp[i-1],prices[i-1]-minprice);//这里当天价格是prices[i-1] 因为比如第1天在数组里的index是0
            if (prices[i-1] < minprice) minprice = prices[i-1];
        }
        return dp[prices.size()];

    }
};
// @lc code=end

