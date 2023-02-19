/*
 * @lc app=leetcode.cn id=733 lang=cpp
 *
 * [733] 图像渲染
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor = image[sr][sc];
        if (color == inicolor) return image;
        fill(image,sr,sc,inicolor,color);
        return image;
    }

    void fill (vector<vector<int>>& image, int x, int y,int targetcolor,int newcolor)
    {
        if (x>image.size()-1 || y>image[0].size()-1|| x<0 || y<0) 
        {
            return;
        }
        if (image[x][y] == targetcolor)
        {
            image[x][y] = newcolor;
            fill(image, x-1 ,y,targetcolor,newcolor);
            fill(image, x+1 ,y,targetcolor,newcolor);
            fill(image, x ,y+1,targetcolor,newcolor);
            fill(image, x ,y-1,targetcolor,newcolor);
        }
        
    }
};
// @lc code=end

