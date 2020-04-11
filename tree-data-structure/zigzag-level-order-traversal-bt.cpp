vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    queue<pair<TreeNode*,int>> q;
    q.push({A,0});
    int level = 0;
    vector<int> curr;
    bool flip = false;
    while(!q.empty()){
        pair<TreeNode*,int> p = q.front(); q.pop();
        TreeNode *temp = p.first;
        int l = p.second;
        
        if(temp->left!=NULL) q.push({temp->left, l+1});
        if(temp->right!=NULL) q.push({temp->right, l+1});
        
        if(level!=l){
            if(flip) reverse(curr.begin(), curr.end());
            ans.push_back(curr);
            curr.clear();
            flip = !flip;
            level = l;
        }
        curr.push_back(temp->val);
    }
    
    if(flip) reverse(curr.begin(), curr.end());
    ans.push_back(curr);
            
    return ans;
}
//BFS
