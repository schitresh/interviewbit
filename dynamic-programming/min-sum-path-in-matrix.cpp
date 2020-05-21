int Solution::minPathSum(vector<vector<int>> &A) {
    int n = A.size(), m = A[0].size();
    
    for(int i=1; i<n; i++) A[i][0] += A[i-1][0];
    for(int j=1; j<m; j++) A[0][j] += A[0][j-1];
    
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            A[i][j] += min(A[i-1][j], A[i][j-1]);
        }
    }
    
    return A[n-1][m-1];
}

