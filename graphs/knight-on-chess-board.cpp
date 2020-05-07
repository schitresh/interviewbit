bool valid(int x, int y, int i, int j, int A, int B){
    if(abs(i)!=abs(j)){
        return x+i > 0 && x+i <= A && y+j > 0 && y+j <= B;
    }
    return false;
}

int Solution::knight(int A, int B, int C, int D, int E, int F) {
    int steps[] = {-2, -1, 1, 2};
    bool visited[A+1][B+1]={{false}};
    
    queue<pair<int,pair<int,int>>> q;
    q.push({0,{C,D}});
    
    while(!q.empty()){
        pair<int,pair<int,int>> temp = q.front(); q.pop();
        int cost = temp.first;
        int x = temp.second.first;
        int y = temp.second.second;
        
        if(x==E && y==F) return cost;
        
        if(visited[x][y]) continue;
        visited[x][y] = true;
        
        for(int r=0; r<4; r++){
            for(int s=0; s<4; s++){
                int i = steps[r], j = steps[s];
                if(!valid(x,y,i,j,A,B) || visited[x+i][y+j]) continue;
                q.push({cost+1, {x+i, y+j}});
            }
        }
    }
    return -1;
}

