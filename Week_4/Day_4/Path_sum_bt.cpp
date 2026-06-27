class Solution {
public:
    bool pathsum(TreeNode* root, int targetSum, int sum){
        if(root == NULL) return false;
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            return sum == targetSum;
        }

        return pathsum(root->left, targetSum, sum) || pathsum(root->right, targetSum, sum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathsum(root, targetSum, 0);
    }
};
