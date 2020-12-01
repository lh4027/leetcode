/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        if(!strs.size())
            return "";
        int min=strs[0].size();
        for(int i=0;i<strs.size();i++)
        {   
            if(strs[i].size()<min)
                min=strs[i].size();
        }   
        
        int i=0,j;     
         for(j=0;j<min;j++)     
        {     
            while((i<strs.size()-1)&&(strs[i][j]==strs[i+1][j]))
            {
                i++;
            }
            if(i==strs.size()-1)
            {
                prefix+=strs[0][j];  
                i=0;
            }
                
            else
                break;           
        }
        return prefix;
    }
};
// @lc code=end

