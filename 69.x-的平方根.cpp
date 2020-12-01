/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        // long long int res=1;
        // long int i=1;

        // while(res<=x)
        // {
        //     i++;
        //     res=i*i;
            
        // }
        // return i-1;

        //二分查找
 /*       int l=0,r=x,res=-1;
        while(l<=r)
        {
            int mid=(r-l)/2+l;
            if((long long)mid*mid<=x)
            {
                l=mid+1;
                res=mid;
            }
            else
            {
                r=mid-1;
            }
            
        }
        return res;
        */
    

//****************牛顿迭代法
        if(x==0)
            return 0;
        double C=x,x0=x;
        while(true)
        {
            double xi=0.5*(x0+C/x0);
            if(abs(xi-x0)<1e-7)
                break;
            x0=xi;
        }
        return (int)x0;
    }
};
// @lc code=end

