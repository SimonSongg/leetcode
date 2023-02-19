/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    bool hasCycle(ListNode *head) {
        if (head == nullptr) return false;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr)
        {
            if(fast->next->next != nullptr)
            {
                slow = slow->next;
                fast = (fast->next);
                fast = (fast->next);
                if (slow == fast)
                {
                    return true;
                }
            }
            else return false;

        }
        return false;
    }
};
// @lc code=end

