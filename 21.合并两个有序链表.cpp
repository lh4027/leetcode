/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start

 // Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //递归算法
        // if(l1==nullptr)
        //     return l2;
        // else if(l2==nullptr)
        //     return l1;
        // else if(l1->val<l2->val)
        // {
        //     l1->next=mergeTwoLists(l1->next,l2);
        //     return l1;
        // }
        // else
        // {
        //     l2->next=mergeTwoLists(l1,l2->next);
        //     return l2;
        // }
        

        //迭代算法
        ListNode *preHead=new ListNode;
        ListNode *pre=preHead;
        
        while(l1!=nullptr&&l2!=nullptr)
        {
            if(l1->val<l2->val)
            {
                pre->next=l1;
                l1=l1->next;
            }
            else
            {
                pre->next=l2;
                l2=l2->next;
            }
            pre=pre->next;
        }
// 合并后 l1 和 l2 最多只有一个还未被合并完，我们直接将链表末尾指向未合并完的链表即可
        pre->next=l1==nullptr?l2:l1;  
        return preHead->next;
    }
};
// @lc code=end

