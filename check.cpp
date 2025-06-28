/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void check(TreeNode* cloned, TreeNode* target , TreeNode* &ans){
        if(cloned==NULL) return;
        if(cloned->val==target->val) ans = cloned;
        check(cloned->left , target , ans);
        check(cloned->right , target , ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = NULL;
        check(cloned , target , ans);
        return ans;
    }
};
