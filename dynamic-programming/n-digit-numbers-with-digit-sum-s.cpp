long long int mod = pow(10,9) + 7;

int sum(int A, int B, int i, int curr, vector<vector<int>> &count){
    if(curr > B) return 0;
    if(A==i){
        if(curr==B) return 1;
        return 0;
    }
    if(count[i][curr]!=-1) return count[i][curr];
    
    int k = 0;
    int j = i==0 ? 1 : 0;
    
    for(; j<=9; j++){
        k = (k + sum(A, B, i+1, curr+j, count) % mod) % mod;
    }
    
    count[i][curr] = k;
    return k;
}
int Solution::solve(int A, int B) {
    vector<vector<int>> count(A, vector<int> (B+1,-1));
    return sum(A, B, 0, 0, count);
}

