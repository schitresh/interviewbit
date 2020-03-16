string Solution::convert(string A, int B) {
    int n = A.size();
    if(B==1) return A;
    string pattern[B];
    int k=1, j=0;
    for(int i=0; i<n; i++){
        pattern[j] += A[i];
        if(j==B-1) k = -1;
        else if(j==0) k= 1;
        j += k;
    }
    
    string ans;
    for(int i=0; i<B; i++){
        ans += pattern[i];
    }
    return ans;
}
