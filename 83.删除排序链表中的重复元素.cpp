/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p=head;
        ListNode *s=nullptr;
        while(p!=nullptr)
        {
            s=p->next;
            if(s!=nullptr&&p->val==s->val)
            {
                p->next=s->next;
                delete s;  
            }
            else
                p=p->next;
        }
        return head;
    }
};
// @lc code=end

