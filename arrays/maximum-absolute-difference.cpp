int Solution::maxArr(vector<int> &A) {
    int k,r,s,t,n=A.size();

    for(int i=0; i<n; i++) A[i]+=i;
    r = *max_element(A.begin(),A.end());
    s = *min_element(A.begin(),A.end());
    k = abs(r-s);
    
    for(int i=0; i<n; i++) A[i]-=2*i;
    r = *max_element(A.begin(),A.end());
    s = *min_element(A.begin(),A.end());
    t = abs(r-s);
    return max(k,t);
}
