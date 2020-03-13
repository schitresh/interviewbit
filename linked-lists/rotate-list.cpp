ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode *temp = A, *head = A;
    int size = 0;
    while(temp!=NULL){
        size++;
        temp = temp->next;
    }
    
    B = B % size;
    if(B==0) return A;
    
    int k = size-B-1;
    temp = A;
    
    while(k--) temp = temp->next;
    A = temp->next;
    temp->next = NULL;
    
    temp = A;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = head;
    
    return A;
}
