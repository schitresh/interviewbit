vector<int> Solution::solve(TreeNode* A) {
    stack<pair<TreeNode*,int>> s;
    s.push({A,0});
    int height = 0;
    vector<int> ans;
    if(A==NULL) return ans;
    ans.push_back(A->val);
    
    while(!s.empty()){
        pair<TreeNode*, int> cur = s.top(); s.pop();
        TreeNode *temp = cur.first;
        int h = cur.second;
        if(height != h){
            ans.push_back(temp->val);
            height = h;
        }
        if(temp->left != NULL) s.push({temp->left, h+1});
        if(temp->right != NULL) s.push({temp->right, h+1});
    }
    
    return ans;
}
