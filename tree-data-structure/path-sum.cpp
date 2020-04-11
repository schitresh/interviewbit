bool path(TreeNode *A, int B, int sum){
    if(A->left==NULL && A->right==NULL) return sum + A->val == B;
    bool left=false, right=false;
    if(A->left!=NULL) left = path(A->left, B, sum + A->val);
    if(A->right!=NULL) right = path(A->right, B, sum + A->val);
    return left || right;
}
int Solution::hasPathSum(TreeNode* A, int B) {
    return path(A,B,0);
}
//DFS
