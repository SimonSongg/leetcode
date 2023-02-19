/*
 * @lc app=leetcode.cn id=2131 lang=cpp
 *
 * [2131] 连接两字母单词得到的最长回文串
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<char,char> hashtable;
        
        int counter = 0;
        int samecounter = 0;
        for (int i = 0; i < words.size(); i++)
        {
            /* code */
            if (words[i][0] == words[i][1])
            {
                if(samecounter == 0 )
                {
                    samecounter++;
                }
                
            }
            auto search = hashtable.find(words[i][1]);
            if ( search != hashtable.end())
            {
                /* code */
                printf("%c",search->first);
                printf("%c",search->second);
                
                if (search->second == words[i][0])
                {

                    counter ++;
                    hashtable.erase(search->first);
                }

            }
            else
            {
                hashtable[words[i][0]]=words[i][1];
            }
            
        }

        return counter*4 + samecounter*2;
        
    }
};
// @lc code=end

