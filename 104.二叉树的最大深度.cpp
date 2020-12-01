/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
#include<queue>
using std::queue;
class Solution {
public:
    int maxDepth(TreeNode* root) {
        //深度优先遍历算法
        // if(!root)
        //     return 0;
        // return max(maxDepth(root->left),maxDepth(root->right))+1;

       //广度优先遍历，每次将队列里面一层的节点输出
        if(!root)
            return 0;
        
        queue<TreeNode*> Q;
        Q.push(root);
        int count=0;
        while(!Q.empty())
        {
            int s=Q.size();
            while(s>0)
            {
                TreeNode *p;
                p=Q.front();
                Q.pop();
                if(p->left)
                    Q.push(p->left);
                if(p->right)
                    Q.push(p->right);
                    s--;       
            }
            count++;
        }
        return count;

    }   
};
// @lc code=end

