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
    int count = 0;
    int result = 0;

    int kthSmallest(TreeNode* root, int k) {
        dfs(root, k);
        return result;
    }

private:
    void dfs(TreeNode* node, int k) {
        if (!node) return;

        // Visit left subtree
        dfs(node->left, k);

        // Process current node
        count++;
        if (count == k) {
            result = node->val;
            return;
        }

        // Visit right subtree
        dfs(node->right, k);
    }
};
