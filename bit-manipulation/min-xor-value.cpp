int Solution::findMinXor(vector<int> &A) {
    int n = A.size();
    int mx = INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<n-1;i++){
        int k = A[i] ^ A[i+1];
        mx = min(mx,k);
    }
    return mx;
}

