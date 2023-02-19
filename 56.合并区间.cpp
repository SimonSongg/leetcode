/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int max_val = -1;
        for (auto interval:intervals)
        {
            if (interval[0] > max_val)
            {
                ans.push_back(interval);
                max_val = interval[1];
            }
            else if (interval[1] > ans[ans.size()-1][1])
            {
                ans[ans.size()-1][1] = interval[1];
                max_val = interval[1];
            }
            
        }

        return ans;
        
        
    }
};
// @lc code=end

