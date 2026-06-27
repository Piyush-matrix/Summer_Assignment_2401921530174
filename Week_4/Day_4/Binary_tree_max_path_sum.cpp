class Solution {
public:
    int path(TreeNode* root,int &maxi){
        if(root==NULL) return 0;
        int l=max(0,path(root->left,maxi));
        int r=max(0,path(root->right,maxi));
        maxi=max(maxi,l+r+root->val);
        return root->val+max(l,r);

    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        path(root,maxi);
        return maxi;
       }
};
