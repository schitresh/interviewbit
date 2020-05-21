int Solution::solve(const vector<int> &A) {
    int n = A.size();
    if(n < 3) return n;
    int ans = 0;
    unordered_map<int, int> count;
    
    for(int i=0; i<n; i++){
        unordered_set<int> diffs;
        for(int j=i+1; j<n; j++){
            int diff = A[j] - A[i];
            if(diffs.find(diff) == diffs.end()){
                count[diff]++;
                diffs.insert(diff);
                ans = max(ans, count[diff]);
            }
        }
    }
    return ans+1;
}

