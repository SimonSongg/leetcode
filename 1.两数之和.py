#
# @lc app=leetcode.cn id=1 lang=python3
#
# [1] 两数之和
#

# @lc code=start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashtable = dict()
        for i in range(0,len(nums)):
            another = target - nums[i]
            if (another in hashtable):
                return [i,hashtable[another]]
            hashtable[nums[i]] = i
        return []
# @lc code=end

