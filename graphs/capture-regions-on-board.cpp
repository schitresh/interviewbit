void Solution::solve(vector<vector<char> > &A) {
    int n=A.size(), m=A[0].size();
    queue<pair<int,int>> q;
    
    for(int i=0;i<m;i++){
        if(A[0][i]=='O') q.push({0,i});
        if(A[n-1][i]=='O') q.push({n-1,i});
    }
    for(int i=1;i<n-1;i++){
        if(A[i][0]=='O') q.push({i,0});
        if(A[i][m-1]=='O') q.push({i,m-1});
    }
    
    
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        vector<pair<int,int>> comb = {{-1,0},{0,-1},{0,0},{0,1},{1,0}};
        for(int i=0;i<comb.size();i++){
            int rr = r+comb[i].first;
            int cc = c+comb[i].second;
            if(rr<0 || cc<0 || rr>=n || cc>=m) continue;
            if(A[rr][cc]=='O'){
                A[rr][cc]='B';
                if(rr==r && cc==c) continue;
                q.push({rr,cc});
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]=='B') A[i][j]='O';
            else if(A[i][j]=='O') A[i][j]='X';
        }
    }
}

