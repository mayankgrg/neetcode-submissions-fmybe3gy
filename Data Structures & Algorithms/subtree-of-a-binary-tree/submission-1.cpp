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

    bool check(TreeNode* a, TreeNode* b){
        if((a==nullptr && b!=nullptr) || (a!=nullptr && b==nullptr))
            return false;
        if((a==nullptr && b==nullptr))
            return true;
        if(a->val == b->val && check(a->left, b->left) && check(a->right, b->right))
            return true;
        return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr)
            return false;
        if(subRoot==nullptr)
            return true;
        if(isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot) || check(root, subRoot)){
            return true;
        }
        return false;

    }
};
