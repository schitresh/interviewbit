int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int n = A.size();
    for(int i=0; i<n; i++){
        while(i<n-1 && A[i]==A[i+1]) i++;
        if(A[i]==n-1-i) return 1;
    }
    return -1;
}
