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
    vector<int> ans;

    void traverse(TreeNode *root, int lvl){
        if(!root){
            return;
        }
        if(ans.size() <= lvl){
            ans.push_back(root->val);
        }
        else{
            ans[lvl]+= root->val;
        }
        traverse(root->left, lvl+1);
        traverse(root->right, lvl+1);
    }

    int deepestLeavesSum(TreeNode* root) {
        traverse(root, 0);
        return ans[ans.size()-1];
    }
};