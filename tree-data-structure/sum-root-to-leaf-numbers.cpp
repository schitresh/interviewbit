void path(TreeNode *A, int n,int &sum){
    n = (n*10 + A->val)%1003;
    if(A->left==NULL && A->right==NULL) sum = (sum+n)%1003;
    if(A->left!=NULL) path(A->left,n,sum);
    if(A->right!=NULL) path(A->right,n,sum);
}
int Solution::sumNumbers(TreeNode* A) {
    int sum = 0;
    path(A,0,sum);
    return sum;
}
//DFS
