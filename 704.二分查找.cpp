/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) return -1;
        int l=0;
        int r=nums.size()-1;
        
        while (l<=r)
        {
            int mid = (l+r)/2;
            if (target < nums[mid])
            {
                r = mid - 1;
            }
            else if (target == nums[mid]) return mid;
            else
            {
                l = mid+1;
            }
        }
        return -1;

    }
};
// @lc code=end

