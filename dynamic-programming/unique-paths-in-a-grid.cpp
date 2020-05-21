void path(vector<vector<int>> &A, int i, int j, int &ans){
    int n = A.size(), m = A[0].size();
    if(i==n-1 && j==m-1){ ans++; return; }
    
    if(i+1 < n && !A[i+1][j]) path(A, i+1, j, ans);
    if(j+1 < m && !A[i][j+1]) path(A, i, j+1, ans); 
}
int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    if(A[0][0]) return 0;
    int ans = 0;
    path(A,0,0,ans);
    return ans;
}

