int Solution::searchInsert(vector<int> &A, int B) {
    int l = 0, r = A.size() - 1, mid;
    while(l <= r){
        mid = (l + r)/2;
        if(A[mid] > B) r = mid - 1;
        else if(A[mid] < B) l = mid + 1;
        else return mid;
    }
    return l;
}

