/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int value=0;
        char temp;
       for(int i=s.length()-1;i>=0;i--)
       {
           temp=s[i-1];
           if(s[i]=='I')
                value=value+1;
            else if(s[i]=='V')
                if(s[i-1]!='I')
                    value=value+5;
                else
                {
                    value=value+4;
                    i--;
                }  
            else if(s[i]=='X')
                if(s[i-1]!='I')
                    value=value+10;
                else
                {
                    value=value+9;
                    i--;
                }  
            else if(s[i]=='L')
                 if(s[i-1]!='X')
                    value=value+50;
                else
                {
                    value=value+40;
                    i--;
                }   
            else if(s[i]=='C')
                if(s[i-1]!='X')
                    value=value+100;
                else
                {
                    value=value+90;
                    i--;
                }    
            else if(s[i]=='D')
                if(s[i-1]!='C')
                    value=value+500;
                else
                {
                    value=value+400;
                    i--;
                }   
            else if(s[i]=='M')
                if(s[i-1]!='C')
                    value=value+1000;
                else
                {
                    value=value+900;
                    i--;
                }    
       }
        return value;
    }
};
// @lc code=end

