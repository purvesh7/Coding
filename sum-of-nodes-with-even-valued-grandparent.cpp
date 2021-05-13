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

    int ans=0;

    void traverse(TreeNode* root, int p=1, int gp=1){
        if(!root){
            return;
        }

        traverse(root->left, root->val, p);
        traverse(root->right, root->val, p);
        if(gp%2 == 0){
            ans+=root->val;
        }

    }


    int sumEvenGrandparent(TreeNode* root) {
        traverse(root, 1, 1);
        return ans;
    }
};