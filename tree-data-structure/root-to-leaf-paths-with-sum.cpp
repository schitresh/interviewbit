vector<vector<int>> ans;
void path(TreeNode *A, int sum, vector<int> nodes){
    sum -= A->val;
    nodes.push_back(A->val);
    if(A->left==NULL && A->right==NULL) if(sum == 0) ans.push_back(nodes);
    if(A->left!=NULL) path(A->left, sum, nodes);
    if(A->right!=NULL) path(A->right, sum, nodes);
    nodes.pop_back();
    return;
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    ans.clear();
    vector<int> nodes;
    path(A,B,nodes);
    return ans;
}
//DFS
