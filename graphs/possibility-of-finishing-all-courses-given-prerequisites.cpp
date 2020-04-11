int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    int n = B.size();
    int ans = 0;
    vector<int> graph[A+1];
    for(int i=0; i<n; i++) graph[B[i]].push_back(C[i]);
    int visited[A+1]={0};
    
    for(int i=1; i<=A; i++){
        if(visited[i]!=0) continue;
        stack<int> s;
        s.push(i);
        int cnt = 1;
        while(!s.empty()){
            int k = s.top();
            s.pop();
            visited[k] = i;
            for(int j=0; j<graph[k].size(); j++){
                if(visited[graph[k][j]]!=0){
                    if(visited[graph[k][j]]==i) cnt=0;
                    break;
                }
                s.push(graph[k][j]);
                cnt++;
            }
        }
        ans += cnt;
    }
    if(ans >= A) return 1;
    return 0;
}
//Graph Traversal: DFS/BFS
