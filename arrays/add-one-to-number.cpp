vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    vector<int> v,ans;
    int c=1, k, r;

    for(int i=n-1; i>=0; i--){
        k=A[i]+c;
        c=k/10;
        r=k%10;
        v.push_back(r);
    }
    v.push_back(c);
    while(!v.back()) v.pop_back();
    
    reverse(v.begin(), v.end());
    return v;
}
