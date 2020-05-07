int ans;
bool dfs(TreeNode *A, int B, int C){
    bool left = false, right = false;
    if(A->left!=NULL) left = dfs(A->left,B,C);
    if(A->right!=NULL) right = dfs(A->right,B,C);
    if(left && right && ans==-1) ans = A->val;
    if(A->val==B || A->val==C){
        if(left || right || B==C) ans = A->val;
        return true;
    }
    if(left || right) return true;
    return false;
}
int Solution::lca(TreeNode* A, int B, int C) {
    ans = -1;
    dfs(A,B,C);
    return ans;
}
