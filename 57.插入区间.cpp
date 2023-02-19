/*
 * @lc app=leetcode.cn id=57 lang=cpp
 *
 * [57] 插入区间
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;

        for (auto interval : intervals)
        {
            /* code */
            if (ans.size() == 0)
            {
                ans.push_back(interval);
            }
            else if (interval[0] > ans.back()[1])
            {
                ans.push_back(interval);
            }
            else
            {
                ans[ans.size()-1][1] = max(interval[1],ans[ans.size()-1][1]);
            }
        }

        return ans;
        

    }
};
// @lc code=end

