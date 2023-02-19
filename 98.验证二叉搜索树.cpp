/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    bool isValidBST(TreeNode* root) {
        
        if (root->left == nullptr && root->right == nullptr) return true;
        return traverse(root,-pow(2,31)-1,pow(2,31));
        

    }

    bool traverse(TreeNode* root, long min, long max)
    {
        
        if (root==nullptr) return true;
        //cout<<root->val<<min<<max<<endl;
        if (root->val <= min || root->val >=max) return false;

        if (root->left == nullptr && root->right == nullptr) return true;
        
        bool left = traverse(root->left,min,root->val);
        
        bool right = traverse(root->right,root->val,max);

        return left&&right;
        
        // if (!left || !right) return false;
        // if (root->left != nullptr && root->right != nullptr)
        // {
        //     if (root->left->val < root->val && root->right->val > root->val) return true;
        //     else return false;
        // }
        // if (root->left != nullptr)
        // {
        //     if (root->left->val < root->val)
        //     {
        //         return true;
        //     }
        //     else
        //     {
        //         return false;
        //     }
        // }
        // else
        // {
        //     if (root->right->val > root->val)
        //     {
        //         return true;
        //     }
        //     else
        //     {
        //         return false;
        //     }
        // }
    }
};
// @lc code=end

