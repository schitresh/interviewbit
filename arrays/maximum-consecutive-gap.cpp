int Solution::maximumGap(const vector<int> &A) {
    if(A.size() < 2) return 0;
    int maxi = *max_element(A.begin(), A.end());
    int mini = *min_element(A.begin(), A.end());
    int n = A.size();
    int gap = ((maxi-mini-1)/(n-1)) + 1;
    
    vector<int> minbuck(n-1, INT_MAX);
    vector<int> maxbuck(n-1, INT_MIN);
    
    for(int i=0; i<n; i++){
        if(A[i]!=maxi && A[i]!=mini){
            int index = (A[i]-mini)/gap;
            minbuck[index] = min(minbuck[index], A[i]);
            maxbuck[index] = max(maxbuck[index], A[i]);
        }
    }
    
    int ans=0;
    int prev = mini;
    for(int i=0; i<n-1; i++){
        if(maxbuck[i] == INT_MIN && minbuck[i] == INT_MAX) continue;
        ans = max(ans, minbuck[i] - prev);
        prev = maxbuck[i];
    }
    
    ans = max(ans, maxi-prev);
    return ans;
}
