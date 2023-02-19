/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        vector<char> storearray;
        for (int i=0;i<s.size();i++)
        {
            if (storearray.empty())
            {
                storearray.push_back(s[i]);
            }
            else if (s[i] == ')')
            {
                if (storearray.back() == '(')
                {
                    storearray.pop_back();
                }
                else
                {
                    return false;
                }
        
                
            }
            else if (s[i] == ']')
            {
                if (storearray.back() == '[')
                {
                    storearray.pop_back();
                }
                else
                {
                    return false;
                }
            }
            else if (s[i] == '}')
            {
                if (storearray.back() == '{')
                {
                    storearray.pop_back();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                storearray.push_back(s[i]);
            }
        }
        return storearray.empty()? true : false;


    }
};
// @lc code=end

