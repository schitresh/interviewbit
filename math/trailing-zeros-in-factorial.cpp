int Solution::trailingZeroes(int A) {
    int k=5;
    int ans=0;
    while(A){
        ans += A/5;
        A /= 5;
    }
    return ans;
}

