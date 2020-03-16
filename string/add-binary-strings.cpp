string Solution::addBinary(string A, string B) {
    int na = A.size(), nb = B.size();
    int n = max(na,nb);
    
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int i=0, k=0;
    string ans="";
    
    while(i<n){
        if(i<na) k += A[i]-'0';
        if(i<nb) k += B[i]-'0';
        ans += k%2 + '0';
        k = k/2;
        i++;
    }
    
    if(k) ans += '1';
    reverse(ans.begin(), ans.end());
    
    return ans;
}

