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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left, right)+1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        //base case
        if(root==NULL)
            return true;
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        int diff=abs(leftheight-rightheight);

        bool ans=(diff<=1);

        bool leftcase=isBalanced(root->left);
        bool rightcase=isBalanced(root->right);

        if(ans && leftcase && rightcase)
            return true;
        else
            return false;
    }
};