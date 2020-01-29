long long factorial(int x){
    if(x <= 0) return 1;
    long long ans = 1;
    for(int i = 1; i <= x; i++) ans *= i;
    return ans;
}
int Solution::uniquePaths(int A, int B) {
    long long num=1;
    int maxi = max(A,B);
    int mini = min(A,B);
    for(int i=maxi; i<=A+B-2; i++) num *= i;
    return num/factorial(mini-1);
}

