/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
    //倒序遍历方法(逆向思维我是废物)
        if(s=="")
            return 0;
        else 
        {
            int i,j=0;

            for(i=s.size()-1;i>=0;i--)
            {
                if(s[i]!=' ')
                    j++;
                if(s[i]==' '&&j>0)break;
            }
            
            return j;
           
        }

    //双指针法？
        
    }
};
// @lc code=end

