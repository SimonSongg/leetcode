/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> isVisited(nums.size(),false);
        vector<int> track;

        backtrack(nums,track,isVisited);

        return ans;
    }

    void backtrack(vector<int>& nums, vector<int> track, vector<bool> isVisited)
    {
        if (track.size() == nums.size())
        {
            ans.push_back(track);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (isVisited[i] == true)
            {
                continue;
            }

            track.push_back(nums[i]);
            isVisited[i] = true;

            backtrack(nums,track,isVisited);

            track.pop_back();

            isVisited[i] = false;


            
        }
        
    }
};
// @lc code=end

