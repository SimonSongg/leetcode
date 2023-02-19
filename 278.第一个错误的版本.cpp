/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long l = 1;
        long r = n;
        while(r >= l + 1)
        {
            long mid = (l+r)/2;
            if (isBadVersion(mid))
            {
                r = mid;
            }
            else
            {
                l = mid+1;
            }
        }
        return l;
    }
};
// @lc code=end

