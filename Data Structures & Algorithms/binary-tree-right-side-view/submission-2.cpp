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
    vector<int> ans;

public:
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return ans;

        dfs(root, 0);
        return ans;
    }

    void dfs(TreeNode* root, int depth) {
        if (!root) return;

        // First node we encounter at this depth
        if (depth == ans.size()) {
            ans.push_back(root->val);
        }

        // Right first = prioritize what is visible
        dfs(root->right, depth + 1);
        dfs(root->left, depth + 1);
    }
};
