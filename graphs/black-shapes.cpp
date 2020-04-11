int Solution::black(vector<string> &A) {
    int n = A.size(), m = A[0].size(), ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j]=='X'){
                stack<pair<int,int>> s;
                s.push({i,j});
                A[i][j]='O';
                while(!s.empty()){
                    int x = s.top().first;
                    int y = s.top().second;
                    s.pop();
                    if(x-1>=0 && A[x-1][y]=='X'){ s.push({x-1,y}); A[x-1][y]='O'; }
                    if(y-1>=0 && A[x][y-1]=='X'){ s.push({x,y-1}); A[x][y-1]='O';}
                    if(x+1<n && A[x+1][y]=='X'){ s.push({x+1,y}); A[x+1][y]='O';}
                    if(y+1<m && A[x][y+1]=='X'){ s.push({x,y+1}); A[x][y+1]='O';}
                }
                ans++;
            }
        }
    }
    
    return ans;
}
//Graph Traversal: DFS/BFS
