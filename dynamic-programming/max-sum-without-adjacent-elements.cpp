int Solution::adjacent(vector<vector<int>> &A) {
    int n = A[0].size();
    for(int i=0; i<n; i++) A[0][i] = max(A[0][i], A[1][i]);
    if(n <= 2) return *max_element(A[0].begin(), A[0].end());
    
    A[0][2] += A[0][0];
    for(int i=3; i<n; i++) A[0][i] += max(A[0][i-2], A[0][i-3]);
    
    return max(A[0][n-2], A[0][n-1]);
}

