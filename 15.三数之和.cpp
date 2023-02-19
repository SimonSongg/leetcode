/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_set<int> hashmap;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int last1 = -10e5;

        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] == last1) continue;
            last1 = nums[i];
            int target = -nums[i];
            for (size_t j = i+1; j < nums.size(); j++)
            {
                
                
                

                if (hashmap.find(target - nums[j]) != hashmap.end())
                {
                    vector<int> temp = {nums[i],nums[j],target - nums[j]};
                    //sort(temp.begin(),temp.end());
                    ans.push_back(temp);
                }
                
                
                hashmap.insert(nums[j]);
                
                
                
            }
            
            hashmap.clear();
            
            
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
        
    }
};
// @lc code=end

