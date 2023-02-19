/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
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
    int max_depth = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        traverse(root);
        return max_depth;

    }
    int traverse (TreeNode* root)
    {
        if (root == nullptr) return 0;
        int left = traverse(root->left);
        int right = traverse(root->right);

        if (left+right > max_depth) 
        {
            max_depth = left + right;
        }
        
        return max(left,right)+1;
    }
};
// @lc code=end

