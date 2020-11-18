void Solution::setZeroes(vector<vector<int> > &A) {
    set<int> rows;
    set<int> cols;

    int n = A.size();
    int m = A[0].size();

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j] == 0){
                rows.insert(i);
                col.insert(j);
            }
        }
    }
    
    for(auto it = rows.begin(); it != row.end(); it++){
        for(int j=0; j<m; j++) A[*it][j] = 0;
    }
    
    for(auto it = cols.begin(); it != col.end(); it++){
        for(int i=0; i<n; i++) A[i][*it] = 0;
    }
}

