int Solution::solve(vector<string> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    int l=0, r=n-1;
    
    while(l+1 < r){
        float k = stof(A[l]) + stof(A[l+1]) + stof(A[r]);
        if(k>=2) r--;
        else if(k<=1) l++;
        else return 1;
    }
    return 0;
}

