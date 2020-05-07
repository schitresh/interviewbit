pair<bool, int> isort(ListNode *node, int i){
    if(i==0) return {true, node->val};
    pair<bool, int> temp = isort(node->next, i-1);
    if(temp.first){
        if(node->val > temp.second){
            node->next->val = node->val;
            node->val = temp.second;
            return {true, temp.second};
        }
    }
    return {false, 0};
} 
 
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode *temp = A;
    int k = 0;
    while(temp){
        isort(A, k);
        temp = temp->next;
        k++;
    }
    return A;
}
