/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include<vector>
#include<queue>
using std::queue;
using std::vector;
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> v;
        if(!root)
            return v; 
        queue<TreeNode*>Q;
        Q.push(root);
        int i=0,j=0;
        while(!Q.empty())
        {  
            int sz=Q.size();
            vector<int> v1;
            while(sz>0)
            {
                TreeNode *p;
                p=Q.front();Q.pop();
                v1.push_back(p->val);
                if(p->left)
                    Q.push(p->left);
                if(p->right)
                    Q.push(p->right);
                sz--;
            }
            v.push_back(v1);   
        }
        reverse(v.begin(),v.end());
         
        return v;
    }
};
// @lc code=end

