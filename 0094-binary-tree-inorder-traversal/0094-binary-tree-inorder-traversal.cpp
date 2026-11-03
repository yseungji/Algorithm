class Solution {

    void visit (TreeNode* root, vector<int> &ans) {
        if(root == nullptr) return ;
        
        visit(root->left, ans);
        ans.push_back(root->val);
        cout << root->val;
        visit(root->right, ans);

        return ;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        visit(root, ans);
        return ans;
    }
};