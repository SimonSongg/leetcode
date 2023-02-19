/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int> storage;
        for (int i=0;i<s.size();i++)
        {
            storage[s[i]] = storage[s[i]]+1;
        }
        for (int i=0;i<t.size();i++)
        {
            storage[t[i]] = storage[t[i]]-1;
            if (storage[t[i]] == 0)
            {
                storage.erase(t[i]);
            }
        }
        return storage.empty()? true : false;
    }
};
// @lc code=end

