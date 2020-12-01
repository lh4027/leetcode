/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
//贪心算法
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int ret=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            ret=ret>sum?ret:sum;
            if(sum<0)
                sum=0;  
        }
        return ret;
    }          
};
// @lc code=end

