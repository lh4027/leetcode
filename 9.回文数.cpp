/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0)
          return false;
      if(x>=0 && x<10)
         return true;

        long  temp=0;
        int xx=x;
        while(x!=0)
        {
            int n=x%10;
            temp=temp*10+n;
            x=x/10;
        }
        if(temp==xx)
            return true;
        else
            return false;
    }
};
// @lc code=end

