/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashmap;

        for (size_t i = 0; i < nums.size(); i++)
        {
            /* code */
            if (hashmap.find(nums[i]) == hashmap.end())
            {
                hashmap[nums[i]] = 1;
            }
            else
            {
                return true;
            }
            
        }
        return false;
    }
};
// @lc code=end

