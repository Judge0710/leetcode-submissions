class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ans = new TreeNode(val);

        if (root == nullptr)
            return ans;

        TreeNode* curr = root;

        while (true) {
            if (val > curr->val) {
                if (curr->right == nullptr) {
                    curr->right = ans;
                    break;
                }
                curr = curr->right;
            }
            else {
                if (curr->left == nullptr) {
                    curr->left = ans;
                    break;
                }
                curr = curr->left;
            }
        }

        return root;
    }
};