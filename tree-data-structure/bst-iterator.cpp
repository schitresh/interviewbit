stack<TreeNode*> s;

BSTIterator::BSTIterator(TreeNode *root) {
    if(root==NULL) return;
    TreeNode *curr = root;
    while(curr!=NULL){
        s.push(curr);
        curr = curr->left;
    }
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    return !s.empty();
}

/** @return the next smallest number */
int BSTIterator::next() {
    if(s.empty()) return -1;
    TreeNode *curr = s.top(); s.pop();
    if(curr->right!=NULL) BSTIterator(curr->right);
    return curr->val;
}
