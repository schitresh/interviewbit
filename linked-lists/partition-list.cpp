/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode *dummy = new ListNode(0);
    dummy->next = A;
    ListNode *cur = dummy;
    ListNode *temp=A, *start=A;
    
    while(temp){
        ListNode *prev = NULL, *end=NULL;
        while(temp && temp->val >= B){
            prev = temp;
            temp = temp->next;
        }
        end = prev;
        while(temp && temp->val < B){
            prev = temp;
            temp = temp->next;
        }
        if(end != NULL){
            if(end!=prev){
                cur->next = end->next;
                end->next = temp;
                prev->next = start;
            }
        }
        cur = prev;
        start = cur->next;
    }
    return dummy->next;
}

