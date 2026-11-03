class Solution {

    void visit (TreeNode* root, vector<int> &ans) {
        if(root != nullptr){
        visit(root->left, ans);
        ans.push_back(root->val);
        visit(root->right, ans);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        visit(root, ans);
        return ans;
    }
};