/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
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
    bool isSameTree(TreeNode* p, TreeNode* q) {

    /*****广度优先搜索方法******************
        if(p==nullptr&&q==nullptr)
            return true;
        else if(p==nullptr||q==nullptr)
            return false;
        queue<TreeNode*> q1,q2;
        q1.push(p);q2.push(q);
        while(!q1.empty()&&!q2.empty())
        {
            auto node1=q1.front();
            q1.pop();
            auto node2=q2.front();
            q2.pop();
            if(node1->val!=node2->val)
                return false;
            auto left1=node1->left,left2=node2->left,right1=node1->right,right2=node2->right;
            if(left1==nullptr^left2==nullptr)
                return false;
            if(right1==nullptr^right2==nullptr)
                return false;
            
            if(left1!=nullptr)
                q1.push(left1);
            if(right1!=nullptr)
                q1.push(right1);
            if(left2!=nullptr)
                q2.push(left2);
            if(right2!=nullptr)
                q2.push(right2);
                
        }
        return q1.empty()&&q2.empty();
     */

    /*******   深度优先算法递归使用       ********
*/
       if(p==nullptr&&q==nullptr)
            return true;
        else if(p==nullptr||q==nullptr)
            return false;
        else if(p->val!=q->val)
            return false;
        else return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
          

    }
};
// @lc code=end

