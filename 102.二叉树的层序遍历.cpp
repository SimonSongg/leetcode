/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> ans;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        ans.push_back({root->val});
        q.push(root);
        while (!q.empty())
        {
            int level_length = q.size();
            vector<int> temp_vec;
            for (size_t i = 0; i < level_length; i++)
            {
                TreeNode* temp = q.front();
                
                q.pop();

                if (temp->left != nullptr)
                {
                    q.push(temp->left);
                    temp_vec.push_back(temp->left->val);
                }
                if (temp->right != nullptr)
                {
                    q.push(temp->right);
                    temp_vec.push_back(temp->right->val);
                }
                // if (temp->left != nullptr || temp->right != nullptr)
                // {
                //     ans.push_back(temp_vec);
                // }
            }
            if (!temp_vec.empty())
            {
                ans.push_back(temp_vec);
            }
        }

        return ans;
        
        
    }
};
// @lc code=end

