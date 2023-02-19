/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> forward(nums.size(),1);
        vector<int> backward(nums.size(),1);
        vector<int> ans(nums.size());
        forward[0] = nums[0];
        backward[nums.size()-1] = nums[nums.size()-1];
        for (size_t i = 1; i < nums.size()-1; i++)
        {
            forward[i] = forward[i-1] * nums[i];
            
            
            
        }
        for (size_t i = nums.size()-2; i >0; i--)
        {
            
            backward[i] = backward[i+1] * nums[i];

        }
        ans[0] = backward[1];
        ans[nums.size()-1] = forward[nums.size()-2];
        for (size_t i = 1; i < nums.size()-1; i++)
        {
            /* code */
            ans[i] = forward[i-1]*backward[i+1];
        }

        return ans;
        
        
    }
};
// @lc code=end

