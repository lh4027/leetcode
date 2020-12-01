/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include<vector>
using namespace std;
#include<map>
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int> m;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]=i; //用原数组的值作为m的key，下标作为value
        for(int i=0;i<nums.size();i++)
        {
            int temp=target-nums[i];
            if(m.count(temp)&&m[temp]!=i)
            {
                res.push_back(i);
                res.push_back(m[temp]);
                break; 
            }  
        }
    return res;

    }
};
// @lc code=end

