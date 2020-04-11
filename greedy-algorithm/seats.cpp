int Solution::seats(string A) {
    int n = A.size();
    vector<int> index;
    for(int i=0; i<n; i++) if(A[i]=='x') index.push_back(i);
    int median = index.size()/2;
    long int ans=0, mod = 10000003;
    for(int i=0; i<index.size(); i++){
        ans += abs(index[median]-index[i])-abs(median-i);
        ans %= mod;
    }
    return ans;
}
//median
