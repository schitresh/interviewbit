int Solution::lis(const vector<int> &A) {
    int n = A.size();
    int cur[n];
    for(int i=0; i<n; i++) cur[i]=1;
    
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(A[i] > A[j]) cur[i] = max(cur[i], cur[j]+1);
        }
    }

    return *max_element(cur, cur+n);
}

