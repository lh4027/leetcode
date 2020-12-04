/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
class Solution {
public:

//求二叉树任意节点高度函数
//采用自顶向下的深度遍历方法
int height(TreeNode* root)
    {
        if(root==nullptr)
            return 0;
        else
            return max(height(root->left),height(root->right))+1;
    }

    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
            return true;
        if(abs(height(root->left)-height(root->right))>1)
            return false;
        return isBalanced(root->left)&&isBalanced(root->right);
        
    }

// //采用自底向上的递归方法
//     int height(TreeNode *root)
//     {
//         if(root==nullptr)
//             return 0;
        
//         int leftHeight=height(root->left);
//         int rightHeight=height(root->right);

//         if(leftHeight==-1||rightHeight==-1||abs(leftHeight-rightHeight)>1)
//             return -1;
//         else
//             return max(leftHeight,rightHeight)+1;
//     }
//     bool isBalanced(TreeNode* root) {

//         return height(root)>=0;
//     }
   
};
// @lc code=end

