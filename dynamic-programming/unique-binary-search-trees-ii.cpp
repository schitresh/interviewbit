int Solution::numTrees(int A) {
    vector<int> ways(A+1,0);
    ways[0]=1;
    for(int i=1; i<=A; i++){
        for(int j=0; j<i; j++){
            ways[i] += ways[j]*ways[i-j-1];
        }
    }
    return ways[A];
}
