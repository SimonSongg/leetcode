/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() <= 1) return s.size();
        
        unordered_map<char,int> observe;
        int max_len = 0;
        int l = 0;
        int r = 0;
        while (r<s.size())
        {
            
            observe[s[r]]++;
            
            
            while ( observe[s[r]]>1)
            {
                observe[s[l]]--;
                l++;
                

            }
            

            max_len = max (max_len, r-l+1);
            r++;
            
            
        }
        

        return max_len;
        
        
        
    }
};
// @lc code=end

