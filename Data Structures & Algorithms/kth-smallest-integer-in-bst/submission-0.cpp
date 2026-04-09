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
    int kthSmallest(TreeNode* root, int k) {    
        vector<int> m;
        solve(root, m);
        return m[k-1];
    }
    void solve(TreeNode* root, vector<int>& m){
        if(!root)
            return;
        solve(root->left, m);
        m.push_back(root->val);
        solve(root->right, m);
    }

};
