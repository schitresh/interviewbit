void Solution::connect(TreeLinkNode* A) {
    queue<pair<TreeLinkNode*,int>> q;
    q.push({A,0});
    
    while(!q.empty()){
        pair<TreeLinkNode*, int> p = q.front(); q.pop();
        TreeLinkNode *temp = p.first;
        int level = p.second;
        
        if(temp->left!=NULL) q.push({temp->left, level+1});
        if(temp->right!=NULL) q.push({temp->right, level+1});
        
        if(!q.empty() && q.front().second==level) temp->next = q.front().first;
        else temp->next = NULL;
    }
}

Alternative Solution:

void Solution::connect(TreeLinkNode* A) {
    TreeLinkNode *start = NULL;
    TreeLinkNode *prev = NULL;
    TreeLinkNode *curr = A;

    while(curr!=NULL){
        while(curr!=NULL){
            if(curr->left!=NULL){
                if(prev!=NULL) prev->next = curr->left;
                else start = curr->left;

                prev = curr->left;
            }
            if(curr->right!=NULL){
                if(prev!=NULL) prev->next = curr->right;
                else start = curr->right;

                prev = curr->right;
            }
            curr = curr->next;
        }
        curr = start;
        start = NULL;
        prev = NULL;
    }
}

