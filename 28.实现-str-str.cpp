/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start


/* 
本质上是模式匹配算法，可以用KMP算法
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        if (needle=="")
            return 0;
        while(i<haystack.length()&&j<needle.length())
        {
            if(haystack[i]==needle[j])
            {
                i++;j++;
            }
            else
            {
                i=i-j+1;j=0;
            }  
        }
        if(j==needle.length())
            return i-j;
        else return -1;
        
        
    }
};
// @lc code=end

