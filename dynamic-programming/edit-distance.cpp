int convert(string &A, string &B, int i, int j, vector<vector<int>> &mem){
    int a = A.size(), b = B.size();
    if(i==a && j==b) return 0;
    if(i==a) return b-j;
    if(j==b) return a-i;
    if(mem[i][j]) return mem[i][j];
    
    if(A[i]==B[j]) mem[i][j] = convert(A,B,i+1,j+1,mem);
    else mem[i][j]  = 1 + min(convert(A,B,i+1,j+1,mem), min(convert(A,B,i,j+1,mem), convert(A,B,i+1,j,mem)));
    
    return mem[i][j];
}
int Solution::minDistance(string A, string B) {
    vector<vector<int>> mem(A.size(), vector<int> (B.size(),0));
    return convert(A,B,0,0,mem);
}

Alternative Solution:

int Solution::minDistance(string A, string B) {
    int a = A.size(), b = B.size();
    vector<vector<int>> dist(a+1, vector<int> (b+1,0));
    for(int i=0; i<=a; i++) dist[i][0] = i;
    for(int i=0; i<=b; i++) dist[0][i] = i;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            if(A[i-1]==B[j-1]) dist[i][j] = dist[i-1][j-1];
            else dist[i][j] = 1 + min(dist[i-1][j-1], min(dist[i-1][j], dist[i][j-1]));
        }
    }
    return dist[a][b];
}

