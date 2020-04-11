int depth(TreeNode* A, int size){
    if(A->left==NULL && A->right==NULL) return size;
    int left=0, right=0;
    if(A->left!=NULL) left = depth(A->left, size+1);
    if(A->right!=NULL) right = depth(A->right, size+1);
    return max(left, right);
}
 
int Solution::maxDepth(TreeNode* A) {
    return depth(A,1);
}
//DFS
