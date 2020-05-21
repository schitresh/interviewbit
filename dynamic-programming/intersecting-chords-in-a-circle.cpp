int Solution::chordCnt(int A) {
    vector<long long int> ways(A+1,0);
    long long int mod=1000000007;
    ways[0]=1;
    ways[1]=1;
    
    for(int i=2; i<=A; i++){
        for(int j=0; j<i; j++){
            ways[i] = (ways[i] + (ways[j] * ways[i-j-1]) % mod) % mod;
        }
    }
    return ways[A];
}

