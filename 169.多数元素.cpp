/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hashtable;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hashtable.find(nums[i]) == hashtable.end())
            {
                hashtable[nums[i]] = 1;
            }
            else{
                hashtable[nums[i]]++;
            }
        }

        for(auto iter = hashtable.begin(); iter != hashtable.end(); ++iter)
        {
            if (iter->second > nums.size()/2) return iter->first;
        }
        return 0;
        
    }
};
// @lc code=end

