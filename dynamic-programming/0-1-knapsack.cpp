int knapsack(vector<int> &A, vector<int> &B, int i, int cur, vector<vector<int>> &vis){
    if(i==A.size()) return 0;
    if(vis[i][cur]!=-1) return vis[i][cur];
    
    int inc = 0, w = cur - B[i];
    if(w >= 0) inc = knapsack(A, B, i+1, w, vis) + A[i];
    int exc = knapsack(A, B, i+1, cur, vis);
    
    vis[i][cur] = max(inc, exc);
    return vis[i][cur];
}
int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    vector<vector<int>> vis(A.size(), vector<int> (C+1, -1));
    return knapsack(A, B, 0, C, vis);
}

Iterative solution:

int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    vector<int> val(C+1, 0);

    for(int i=0; i<A.size(); i++){
        for(int j=C; j>=B[i]; j--){
            val[j] = max(val[j], val[j-B[i]] + A[i]);
        }
    }

    return val[C];
}

