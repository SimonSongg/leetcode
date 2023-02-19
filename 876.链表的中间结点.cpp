/*
 * @lc app=leetcode.cn id=876 lang=cpp
 *
 * [876] 链表的中间结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            head = head->next;
            fast = fast->next->next;
            
        }
        return head;
    }
};

/////////////////My own solution

// class Solution {
//     ListNode* temp;
//     int counter = 0;
// public:
//     ListNode* middleNode(ListNode* head) {
//         temp = head;
//         while (temp->next != nullptr)
//         {
//             temp = temp->next;
//             counter++;
//         }
//         temp = head;
//         if (counter%2 == 1)
//         {
//             counter = (counter/2)+1;
//         }
//         else
//         {
//             counter = (counter/2);
//         }
        
//         while (counter!=0)
//         {
//             temp = temp->next;
//             counter--;
//         }

//         return temp;
//     }
// };
// @lc code=end

