int Solution::minimumTotal(vector<vector<int> > &A) {
    int n = A.size();
    for(int i=1; i<n; i++){
        int m = A[i].size();
        A[i][0] += A[i-1][0];
        A[i][m-1] += A[i-1][m-2];
        
        for(int j=1; j<m-1; j++){
            A[i][j] += min(A[i-1][j-1], A[i-1][j]);
        }
    }
    return *min_element(A[n-1].begin(), A[n-1].end());
}

