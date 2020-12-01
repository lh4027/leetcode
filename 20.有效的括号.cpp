/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include<iostream>
#include<stack>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isPair(char a,char b)
    {
        if((a=='('&&b==')')||(a=='['&&b==']')||(a=='{'&&b=='}'))
            return true;
        else return false;
    }
    bool isValid(string s) {
        
        stack<char> Stack;
        
        if(s=="")
            return true;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
                Stack.push(s[i]);
            else
            {
                if(!(Stack.empty())&&(isPair(Stack.top(),s[i])))
                    Stack.pop();
                else
                    return false;   
            }
        }
        if(Stack.empty())
            return true;
        else return false;
    }
   
};
// @lc code=end

