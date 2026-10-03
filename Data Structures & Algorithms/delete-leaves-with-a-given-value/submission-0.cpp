class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) 
    {
        return dfs(root, target);
    }

private:
    TreeNode* dfs(TreeNode* node, int trg)
    {
        if(!node)
        {
            return nullptr;
        }

        node->left = dfs(node->left, trg);
        node->right = dfs(node->right, trg);

        if(node->val == trg && !node->left && !node->right)
        {
            return nullptr;
        }

        return node;
    }
};