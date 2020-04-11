int Solution::solve(int A, vector<vector<int> > &B) {
    int ans=0, n = B.size();
    vector<pair<int,int>> graph[A+1];
    for(int i=0; i<n; i++){
        graph[B[i][0]].push_back({B[i][1], B[i][2]});
        graph[B[i][1]].push_back({B[i][0], B[i][2]});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    bool visited[A+1]={false};
    pq.push({0,1});
    
    while(!pq.empty()){
        pair<int,int> k = pq.top(); pq.pop();
        int x = k.second, v = k.first;
        if(visited[x]) continue;
        visited[x] = true;
        ans += v;
        for(int i=0; i<graph[x].size(); i++){
            if(visited[graph[x][i].first]) continue;
            pq.push({graph[x][i].second, graph[x][i].first});
        }
    }
    return ans;
}
//Prim's algorithm
