class Solution {
public:
    int ans = 0;
    void curDepth(TreeNode* root, int cur){
        if(root != nullptr){
            ans = max(cur, ans);
            curDepth(root->left, cur+1);
            curDepth(root->right, cur+1);
        }
        return;
    }


    int maxDepth(TreeNode* root) {
        curDepth(root, 1);
        return ans;
    }
};