/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,j=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                return i;
            else
            {
                if(nums[i]<target)
                    j++;
            }  
        }
        return j;
    }
};
// @lc code=end

