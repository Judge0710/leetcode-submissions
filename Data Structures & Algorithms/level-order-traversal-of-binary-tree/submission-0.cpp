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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {

        vector<vector<int>> ans ;
         
        queue<TreeNode*> q;
        if (root != nullptr) 
        {
            q.push(root);
        }
        while (!q.empty()) 
        {
            vector<int> temp ;
            int size = q.size();
            for(int i = 0 ; i < size ; i++)
            {
                TreeNode* tempNode = q.front() ;
                temp.push_back(tempNode->val) ;
                q.pop();
                if (tempNode->left != nullptr) 
                {
                    q.push(tempNode->left);
                }
                if (tempNode->right != nullptr) 
                {
                    q.push(tempNode->right);
                }
            }
            ans.push_back(temp);
        }
        return ans ;

        
    }
};
