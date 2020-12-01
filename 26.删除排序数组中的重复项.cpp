/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int size=nums.size();
        int i,j=0;
        for(i=0;i<nums.size();i++)
        {
            while((i<nums.size()-1)&&nums[i]==nums[i+1])
            {
                size--;
                i++;
            }
            nums[j]=nums[i];
            j++;
        }
        return size;
    }
};
// @lc code=end

