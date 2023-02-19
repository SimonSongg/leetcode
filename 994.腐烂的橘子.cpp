/*
 * @lc app=leetcode.cn id=994 lang=cpp
 *
 * [994] 腐烂的橘子
 */

// @lc code=start
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<vector<int>> rotted;
        int row = grid.size();
        int col = grid[0].size();
        int blankCount = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 2)
                {
                    rotted.push({i,j,0});
                }
                else if (grid[i][j] == 0)
                {
                    blankCount++;
                }
            }
            
        }
        int rotTime = 0;
        int x[] = {0,0,-1,1};
        int y[] = {-1,1,0,0};
        int rottedCount = 0;
        while (!rotted.empty())
        {
            rottedCount++;
            vector<int> temp = rotted.front();
            rotted.pop();
            if (temp[2] != rotTime) rotTime++;
            for (size_t i = 0; i < 4; i++)
            {
                int nextx = temp[0] + x[i];
                int nexty = temp[1] + y[i];

                if (nextx>=0 && nextx <grid.size() && nexty>=0 && nexty <grid[0].size() && grid[nextx][nexty] == 1)
                {
                    grid[nextx][nexty] = 2;
                    rotted.push({nextx,nexty,rotTime+1});
                }
                
            }
        }
        if (row*col-blankCount != rottedCount) return -1;
        return rotTime;


        
    }

};
// @lc code=end

