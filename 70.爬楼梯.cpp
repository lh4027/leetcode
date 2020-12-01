/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n==0||n==1||n==2)
            return n;
        else
        {
            int temp=0;
            int a=1,b=2;
            for(int i=2;i<n;i++)
            {
                temp=a+b;
                a=b;b=temp;
                
            }
            return temp;

        }
        
        
    }
};
// @lc code=en d

