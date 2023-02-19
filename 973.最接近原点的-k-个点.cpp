/*
 * @lc app=leetcode.cn id=973 lang=cpp
 *
 * [973] 最接近原点的 K 个点
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        double distance = 14142.13562;

        map<double,vector<int>> hashmap;

        for (size_t i = 0; i < points.size(); i++)
        {
            /* code */
            double temp_dis = sqrt(pow(points[i][0],2)+pow(points[i][1],2));
            if (hashmap.find(temp_dis) == hashmap.end())
            {
                vector<int> temp;
                hashmap[temp_dis] = temp;
                hashmap[temp_dis].push_back(i);
            }
            else
            {
                hashmap[temp_dis].push_back(i);
            }
        }

        for (auto iter = hashmap.begin(); iter != hashmap.end(); ++iter)
        {
            /* code */
            int cur = (iter->second).size();
            while (k>0 && cur>0)
            {
                ans.push_back(points[(iter->second)[cur-1]]);
                k--;
                cur--;
            }

        }
        
        
        // for (size_t i = 0; i < points.size(); i++)
        // {
        //     /* code */
        //     double temp_dis = sqrt(pow(points[i][0],2)+pow(points[i][1],2));
        //     if (temp_dis<distance)
        //     {
        //         distance = temp_dis;
        //         ans.clear();
        //         ans.push_back(points[i]);
        //     }
        //     else if (temp_dis == distance)
        //     {
        //         ans.push_back(points[i]);
        //     }
        // }

        // while (ans.size() > k)
        // {
        //     ans.pop_back();
        // }
        
        return ans;
    }
};
// @lc code=end

