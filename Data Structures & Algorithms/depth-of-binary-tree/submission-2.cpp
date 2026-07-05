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
    int maksimalan = 0;
    int ans = 0;
    void dfs(TreeNode* root){
        if(root == nullptr){
            return;
        }
        ans++;
        cout <<"CVOR: " <<  root->val << "\n";
        maksimalan = max(maksimalan,ans);
        cout <<"ANS: "<< ans << "\n";
        if(root->left != nullptr){
            dfs(root->left);
            ans--;
        }
        
        if(root->right != nullptr){
            dfs(root->right);
            ans--;
        }
        
    }
    
    int maxDepth(TreeNode* root) {
        /*dfs(root);
        return maksimalan;*/
        if(root == nullptr){
            return 0;
        }
        int maxDepthleft = maxDepth(root->left);
        int maxDepthright = maxDepth(root->right);
        return 1+max(maxDepthleft,maxDepthright);
        
    }
};
