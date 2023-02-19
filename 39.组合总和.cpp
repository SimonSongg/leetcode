/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> track;
        int sum = 0;
        backtrack(candidates, track, sum, target);
        //sort(ans.begin(),ans.end());
        //ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }

    void backtrack(vector<int>& candidates, vector<int> track, int sum, int target)
    {
        if (sum > target)
        {
            return;
        }
        
        if (sum == target)
        {
            //vector<int> temp = track;
            //sort(temp.begin(),temp.end());
            ans.push_back(track);
            //cout<<"output"<<endl;
            return;
        }
        //if (track.size() != 0 && candidates[i] < track.back()) return;
        for (int i = 0; i < candidates.size(); i++)
        {
            if (track.size() != 0 && candidates[i] < track.back()) continue;
            if (sum + candidates[i] <= target)
            {
                
                track.push_back(candidates[i]);
                //cout<<"1 "<<sum<<endl;
                sum = sum + candidates[i];
                //cout<<"2 "<<sum<<endl;
                backtrack(candidates, track, sum, target);

                track.pop_back();
                sum = sum - candidates[i];
                //cout<<"3 "<<sum<<endl;
            }
        }

        return;
        
    }
};
// @lc code=end

