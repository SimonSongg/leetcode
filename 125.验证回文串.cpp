/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int i = -1;
        int j = s.size();
        if (s.size() == 0) return true;
        while(i<j)
        {
            // if (s[i].isalnum())
            // {
            //     if (s[j].isalnum())
            //     {

            //     }
            // }

            //两边往中间推进 直到碰到字母或数字停下
            //这里要注意不管怎么样i和j都会至少推进一格 (因为用了do while) 所以结尾不需要再手动推进
            do i++; while(!isalnum(s[i]) && i<s.size()-1);
        
            do j--; while(!isalnum(s[j]) && j>0);
            
                
            //如果i和j已经推进到相遇或者交错了 说明前面验证一直都是正确的 可以返回true
            if (i>=j)
            {
                return true;
            }
            //验证两个字符是否相同 如果不相同就直接返回false
            if (tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
            // else
            // {
            //     i++;
            //     j--;
            // }
        }
        return true;
    }
};
// @lc code=end

