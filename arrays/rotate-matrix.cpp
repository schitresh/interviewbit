void Solution::rotate(vector<vector<int> > &A) {
    int r = A.size();
    int c = A[0].size();
    int n = r;
    int diff = abs(r - c);
    
    if(r > c){
        for(int i=0;i<r;i++){
            int k = diff;
            while(k--) A[i].push_back(0);
        }
    }
    else if(c > r){
        int k = diff;
        while(k--) A.push_back(vector<int> (c, 0));
        n = c;
    }
    
    int m = n/2;
    
    for(int i=0;i<m;i++){
        int k = n-1-i;
        for(int j=i;j<k;j++){
            int temp = A[n-1-j][i];
            A[n-1-j][i] = A[k][n-1-j];
            A[k][n-1-j] = A[j][k];
            A[j][k] = A[i][j];
            A[i][j] = temp;
        }
    }
    
    if(r > c){
        int k = diff;
        while(k--){
            A[r-1-k].erase(A[r-1-k].begin(), A[r-1-k].end());
        }
    }
    else if(c > r){
        int k = diff;
        for(int i=0;i<c;i++){
            int k = diff;
            A[i].erase(A[i].begin(), A[i].begin()+k);
        }
    }
}
