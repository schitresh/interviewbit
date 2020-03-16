ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *t1,*t2,*prev;
    if(A->val > B->val){ t1 = B->next; prev = B; t2 = A; }
    else{ t1 = A->next; prev = A; t2  = B; }
    
    while(t1!=NULL && t2!=NULL){
        if(t1->val > t2->val){
            prev->next = t2;
            prev = t2;
            t2 = t2->next;
        }
        else{
            prev->next = t1;
            prev = t1;
            t1 = t1->next;
        }
    }
    if(t1!=NULL) prev->next = t1;
    if(t2!=NULL) prev->next = t2;
    
    if(A->val > B->val) return B;
    return A;
}
