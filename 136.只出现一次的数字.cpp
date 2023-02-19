/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for (size_t i = 1; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }

        return ans;
        
    }
};
// @lc code=end

