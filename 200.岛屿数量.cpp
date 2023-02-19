/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int counter = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == '1')
                {
                    traverse(grid,i,j);
                    counter++;
                }
            }
            
        }

        return counter;
        
    }

    void traverse (vector<vector<char>>& grid, int r, int c)
    {
        //cout<<r<<c<<endl;
        //cout<<grid[r][c]<<endl;
        if (r<0 || c < 0 || r >=grid.size() || c >= grid[0].size()) return;

        if ( grid[r][c]=='1')
        {
            grid[r][c]='0';
            traverse(grid,r+1,c);
            traverse(grid,r,c+1);
            traverse(grid,r-1,c);
            traverse(grid,r,c-1);
        }
        return;
    }
};
// @lc code=end

