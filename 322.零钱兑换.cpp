/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] 零钱兑换
 */

// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        vector<int> dp(amount+1);
        dp[0] = 0;
        for (size_t i = 1; i < amount+1; i++)
        {
            /* code */
            if (find(coins.begin(),coins.end(),i) != coins.end())
            {
                /* code */
                dp[i] = 1;
                //cout<<"here"<<endl;
            }
            else
            {
                for (auto coin:coins)
                {
                    /* code */
                    if (i> coin && dp[i-coin]!=0)
                    {
                        dp[i] = dp[i] ==0? dp[i-coin]+1:min(dp[i],dp[i-coin]+1);
                        
                    }
                    //cout<<dp[i]<<endl;
                }
                
            }
            
        }
        if (!dp[amount]) return -1;
        return dp[amount];
        
    }
};
// @lc code=end

