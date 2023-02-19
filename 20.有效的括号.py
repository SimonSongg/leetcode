#
# @lc app=leetcode.cn id=20 lang=python3
#
# [20] 有效的括号
#

# @lc code=start
class Solution:
    def isValid(self, s: str) -> bool:
        storearray = []
        for i in range(0,len(s)):
            if len(storearray) == 0:
                storearray.append(s[i])
            elif s[i] == ')':
                if storearray[-1] == '(':
                    storearray.pop()
                else:
                    storearray.append(s[i])
            elif s[i] == ']':
                if storearray[-1] == '[':
                    storearray.pop()
                else:
                    storearray.append(s[i])
            elif s[i] == '}':
                if storearray[-1] == '{':
                    storearray.pop()
                else:
                    storearray.append(s[i])
                    
            else:
                storearray.append(s[i])
        if storearray:
            return False
        else:
            return True
# @lc code=end

