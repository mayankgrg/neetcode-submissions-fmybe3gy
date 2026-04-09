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
     int maxSum = INT_MIN;

    int solve(TreeNode* root){
        if(root == nullptr)
            return 0;
        int l = solve(root->left);
        int r = solve(root->right);
        int ans = root->val;
        ans = max(ans, max(ans+l, ans+r));
        maxSum = max(maxSum, max(ans, root->val+l+r));
        return ans;
    }

    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxSum;
    }
};
