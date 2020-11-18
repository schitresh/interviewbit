vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int i=0, j=0, k=0, r, s, n = A.size(), x, y;
    r = n*(n+1)/2;
    s = n*(n+1)*(2*n+1)/6;
    
    for(i=0; i<n; i++){
        j+=A[i];
        k+=(long long int)A[i]*(long long int)A[i];
    }
    
    x = r-j;
    y = s-k;

    vector<int> ans;
    ans.push_back(((y/x)-x)/2);
    ans.push_back(x+ans[0]);
    return ans;
}


