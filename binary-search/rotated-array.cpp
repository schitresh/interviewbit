int Solution::findMin(const vector<int> &A) {
    int k = A.size();
    int l = 0, r = A.size()-1, m, p,n;
    if(A[l] <= A[r]) return A[l];

    while(l <= r){
        m = (l + r)/2;
        p = (k + m - 1) % k;
        n = (k + m + 1) % k;
        if(A[p] > A[m]) return A[m];
        else if(A[n] < A[m]) return A[n];
        else if(A[m] > A[l]) l = m + 1;
        else r = m - 1;
    }
}

