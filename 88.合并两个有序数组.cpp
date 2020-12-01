/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int k=m+n-1;
       m--;n--;
        while(m>=0&&n>=0)
        {
            nums1[k--]=nums1[m]>nums2[n]?nums1[m--]:nums2[n--];
        }
        while(n>=0)
        {
            nums1[k--]=nums2[n--];
        }
    }
};
// @lc code=end


