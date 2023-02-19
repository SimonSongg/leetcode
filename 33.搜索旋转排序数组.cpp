/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        if (nums.size() == 1) return nums[0]==target? 0:-1;

        while (l<=r)
        {
            int mid = (l+r)/2;
            //cout<<mid<<endl;
            if (nums[mid] == target)
            {
                return mid;
            }
            else
            {
                if (nums[mid] > nums[r])//左边是连续递增
                {
                    /* code */
                    //cout<<nums[mid]<<endl;
                    if (nums[l] <= target && target < nums[mid])
                    {
                        r = mid-1;
                        //cout<<"here1"<<endl;
                    }
                    else
                    {
                        l = mid +1;
                        //cout<<"here2"<<endl;
                    }
                    
                }
                else if (nums[mid] <= nums[r]) //右边是连续的递增
                {
                    /* code */
                    if (nums[mid] < target && target <= nums[r])
                    {
                        l = mid + 1;
                    }
                    else
                    {
                        r = mid-1;
                    }
                    
                }
                
                
            }
            
            
        }

        

        return -1;
        
    }
};
// @lc code=end

