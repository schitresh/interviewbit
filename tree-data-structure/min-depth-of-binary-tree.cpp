int depth(TreeNode *A, int size){
    if(A->left==NULL && A->right==NULL) return size;
    int left=INT_MAX, right=INT_MAX;
    if(A->left!=NULL) left = depth(A->left, size+1);
    if(A->right!=NULL) right = depth(A->right, size+1);
    return min(left, right);
}
int Solution::minDepth(TreeNode* A) {
    return depth(A,1);
}
//DFS
