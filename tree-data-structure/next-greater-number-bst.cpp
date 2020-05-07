TreeNode* Solution::getSuccessor(TreeNode* A, int B) {
    TreeNode *ans = NULL;
    TreeNode *temp = A;
    while(temp){
        if(temp->val > B ){
            ans = temp;
            temp = temp->left;
        }
        else temp = temp->right;
    }
    return ans;
}
