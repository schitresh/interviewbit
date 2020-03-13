Initial Approach:

ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *temp=A, *prev=A;
    int size=0;
    while(temp!=NULL){
        size++;
        temp = temp->next;
    }
    int k = size - B;
    if(k<0) k=0;
    if(size==1 && k==0) return NULL;
    if(k==0) return A->next;
    temp = A;
    while(k--){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    return A;
}

Alternative Approach:

ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *temp=A, *prev=A, *curr;
    while(B-- && temp) temp = temp->next;
    if(temp==NULL){
        curr = A->next;
        delete(A);
        return curr;
    }
    while(temp->next){
        temp = temp->next;
        prev = prev->next;
    }
    curr = prev->next;
    prev->next = prev->next->next;
    delete(curr);
    return A;
}
