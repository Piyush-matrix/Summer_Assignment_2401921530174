class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL || issymhelp(root->left,root->right);
        
    }
    bool issymhelp(TreeNode* left,TreeNode* right){
        if(left==NULL || right==NULL) return left==right;
        if(left->val!=right->val)return false;
        return issymhelp(left->left,right->right)
        && issymhelp(left->right,right->left);

    }
};
