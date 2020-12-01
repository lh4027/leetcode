/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
 #define INT_MAX 2147483647
 #define INT_MIN -2147483648
// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int temp=0;
        while(x!=0)
        {
            if(temp>INT_MAX/10||temp<INT_MIN/10)
                return 0;
            temp=temp*10+x%10;
            x=x/10;
        }
        return temp;
    }
};
// @lc code=end

