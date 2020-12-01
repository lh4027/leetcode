/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
 
        int i;
        if(digits[digits.size()-1]<9)
        {
            digits[digits.size()-1]+=1;
        }
        else
        {
            for(i=digits.size()-1;i>=0;i--)
            {
                if(digits[i]+1==10)
                {
                    digits[i]=0;
                }
                else
                {
                    digits[i]+=1;break;
                }   
            }
            if(i==-1)
            { 
                digits.push_back(0);
                digits[0]=1;
            }
        }
        return digits;
        
    }
};
// @lc code=end

