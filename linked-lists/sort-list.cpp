/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void merge(ListNode *A, ListNode *B, int l, int m, int r){
    int left = m-l+1;
    int right = r-m;
    ListNode *a = A, *b = B;
    int arr[r-l+1]; int k = 0;
    
    while(left && right){
        if(a->val < b->val){
            arr[k++] = a->val;
            a = a->next;
            left--;
        }
        else{
            arr[k++] = b->val;
            b = b->next;
            right--;
        }
    }
    while(left>0){
        arr[k++]=a->val;
        a=a->next;
        left--;
    }
    while(right>0){
        arr[k++]=b->val;
        b=b->next;
        right--;
    }

    for(int i=0; i<k; i++){
        A -> val = arr[i];
        A = A->next;
    }
}

void msort(ListNode *A, int l,  int r){
    if(l>=r) return;
    int m = (l+r)/2;
    
    ListNode *B = A;
    int i=m-l+1;
    while(i--) B = B->next;
    
    msort(A, l, m);
    msort(B, m+1, r);
    merge(A, B, l, m, r);
}

ListNode* Solution::sortList(ListNode* A) {
    ListNode *temp = A;
    int size=0;
    while(temp){ temp = temp->next; size++; }
    msort(A, 0, size-1);
    return A;
}

