/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<queue>
using std::queue;
class Solution {
public:

    
    //深度优先遍历DFS
    // int minDepth(TreeNode* root) {
    //     if(root==nullptr)
    //         return 0;
        
    //     int leftHeight=minDepth(root->left);
    //     int rightHeight=minDepth(root->right);

    //     if(leftHeight==0)
    //         return rightHeight+1;
    //     else if(rightHeight==0)
    //         return leftHeight+1;
    //     else
    //         return min(leftHeight,rightHeight)+1;
    // }

    //广度优先遍历
    int minDepth(TreeNode* root) {

        if(root==nullptr)
            return 0;
        
        queue<TreeNode*> Q;
        int height=1;
        Q.push(root);
        
        while(!Q.empty())
        {
            int s=Q.size();
            while(s>0)
            {
                TreeNode *p=Q.front();
                Q.pop();
                if(p->left==nullptr&&p->right==nullptr)
                    return height;

                if(p->left!=nullptr)
                    Q.push(p->left);
                
                if(p->right!=nullptr)
                    Q.push(p->right);  
                
                s--;
            }
            height++;
        }
        return -1;
        
    }
};
// @lc code=end

