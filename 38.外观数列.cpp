/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */
#include<iostream>
#include<sstream>

using namespace std;
// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string temp,res="";
        temp=countAndSay(n-1);
        int i,count=1;
        for(i=0;i<temp.size();i++)
        {
            if(temp[i]==temp[i+1])
            {
                count++;
            }
            else
            {
                res=res+(to_string(count)+temp[i]);
                count=1;
            }
        }
        
        return res;      
    }
};
// @lc code=end

