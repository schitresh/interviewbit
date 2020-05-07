ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *dummy = new ListNode(0);
    dummy->next = A;
    ListNode *prev = dummy;
    ListNode *cur = A;
    
    while(cur){
        while(cur->next && cur->next->val == cur->val){
            cur = cur->next;
        }
        if(prev->next == cur) prev = cur;
        else prev->next = cur->next;
        cur = cur->next;
    }
    return dummy->next;
}

Alternative Solution:
with freeing space


ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *prev = NULL;
    ListNode *cur = A;
    ListNode *temp = cur->next;
    bool flag = false;
    while(temp){
        if(temp->val == cur->val){
            flag=true;
            ListNode* t = temp;
            temp = temp->next;
            free(t);
        }
        else{
            if(flag){
                if(prev) prev->next = temp;
                else A = temp;
                free(cur);
            }
            else prev = cur;
            flag = false;
            cur = temp;
            temp = temp->next;
        }
    }
    if(flag){
        if(prev) prev->next = temp;
        else A = temp;
        free(cur);
    }
    return A;
}
