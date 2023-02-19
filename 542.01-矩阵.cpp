/*
 * @lc app=leetcode.cn id=542 lang=cpp
 *
 * [542] 01 矩阵
 */
//动态规划 或者 BFS

// @lc code=start
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<vector<int>> ans(row, vector<int>(col));

        queue<pair<int,int>> q;


        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (mat[i][j] == 0)
                {
                    ans[i][j] = 0;
                    q.emplace(i,j);
                }
                else
                {
                    ans[i][j] = -1;
                }
                
            }
        }
        int x[] = {0,0,1,-1};
        int y[] = {1,-1,0,0};
        while (!q.empty())
        {
            pair<int,int> temp = q.front();
            q.pop();
            for (size_t i = 0; i < 4; i++)
            {
                pair<int,int> next;
                next.first = temp.first + x[i];
                next.second = temp.second + y[i];
                if (next.first >= 0 && next.first < row && next.second < col && next.second>=0 && ans[next.first][next.second] == -1)
                {
                    ans[next.first][next.second] = ans[temp.first][temp.second] +1;
                    q.push({next.first,next.second});
                }
                
            }
            
        }

        return ans;
    }
};
// @lc code=end

