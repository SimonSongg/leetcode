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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        if (calculatedepth(root) == -1) return false;
        else return true;
    }

    int calculatedepth (TreeNode* root)
    {
        if (root == nullptr) return 0;

        int leftdepth = calculatedepth(root->left);
        int rightdepth = calculatedepth(root->right);
        if (leftdepth == -1 || rightdepth == -1) return -1;

        if (abs(leftdepth-rightdepth)>1) return -1;

        return 1+max(leftdepth,rightdepth);
    }
};
// @lc code=end

