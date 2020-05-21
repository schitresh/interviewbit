int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int maxc = *max_element(A.begin(), A.end());
    vector<long> cost(maxc+1, INT_MAX);
    cost[0] = 0;
    
    for(int i=0; i<B.size(); i++){
        for(int j=B[i]; j<=maxc; j++){
            cost[j] = min(cost[j], cost[j-B[i]] + C[i]);
        }
    }
    
    int ans = 0;
    for(auto i: A) ans += cost[i];
    return ans;
}

