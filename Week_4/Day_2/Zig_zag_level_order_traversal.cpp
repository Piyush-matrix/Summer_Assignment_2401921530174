class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        bool ltor=true;
        while(!q.empty()){
            int size =q.size();
            vector<int> level(size);
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                int ind=(ltor)? i:(size-1-i);
                level[ind]=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }
            ltor=!ltor;
            result.push_back(level);
        } return result;
        
    }
};
