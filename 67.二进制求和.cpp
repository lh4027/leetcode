/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */
#include<vector>
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        int lena=a.size();
        int lenb=b.size();
        while(lena<lenb)  //补位
        {
            a='0'+a;
            lena++;
        }
        while(lenb<lena)
        {
            b='0'+b;
            lenb++;
        }
        for(int i=a.size()-1;i>0;i--)
        {
            a[i]=a[i]+b[i]-'0';
            if(a[i]>='2')
            {
                a[i]=(a[i]-'0')%2+'0';
                a[i-1]=a[i-1]+1;
            }
        }
        a[0]=a[0]+b[0]-'0';
        if(a[0]>='2')
        {
            a[0]=(a[0]-'0')%2+'0';
            a='1'+a;
        }  
        return a; 
        
    }
    
};
// @lc code=end

