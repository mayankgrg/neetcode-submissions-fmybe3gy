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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        if(root==nullptr)
            return ans;
        while(!q.empty()){
            vector<TreeNode*> temp;
            vector<int> t;
            while(!q.empty()){
                temp.push_back(q.front());
                q.pop();
            }
            for(auto i : temp){
                t.push_back(i->val);
                if(i->left != nullptr)
                    q.push(i->left);
                if(i->right != nullptr)
                    q.push(i->right);
            }
            ans.push_back(t);
        }
        return ans;
    }
};
