class Solution {
public:
    bool isvalid(TreeNode* root,long minval,long maxval){
        if(root==NULL) return true;
        if(root->val<=minval || root->val>=maxval) return false;
        return isvalid(root->left,minval,root->val)
        && isvalid(root->right,root->val,maxval);
    }
    bool isValidBST(TreeNode* root) {
       return isvalid(root,LONG_MIN,LONG_MAX);
        
    }
};
