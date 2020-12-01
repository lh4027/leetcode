/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */
#include<queue>
using std::queue;
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
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> Q1,Q2;
        TreeNode *p,*s;
        Q1.push(root);
        Q2.push(root);
        if(root==nullptr)
            return true;
        while(!Q1.empty()&&!Q2.empty())
        {
            p=Q1.front();s=Q2.front();
            Q1.pop();Q2.pop();
            
            if(p->val==s->val)
            {
                if((p->left==nullptr)^(s->right==nullptr))
                    return false;
                if((p->right==nullptr)^(s->left==nullptr))
                    return false;
                if(p->left!=nullptr&&s->right!=nullptr)
                {
                    Q1.push(p->left);
                    Q2.push(s->right);
                }
                if(p->right!=nullptr&&s->left!=nullptr)
                {
                    Q1.push(p->right);
                    Q2.push(s->left);
                } 
            }
            else return false;
        }
        return true;



    }
};
// @lc code=end

