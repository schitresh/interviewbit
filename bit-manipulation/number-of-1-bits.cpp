int Solution::numSetBits(unsigned int A) {
    int k=2;
    int ans=0;
    while(A){
        ans += A%2;
        A /= 2;
    }
    return ans;
}

Alternative Solution:

int Solution::numSetBits(unsigned int A) {
    int ans=0;
    while(A){
        A = A & (A-1);
        ans++;
    }
    return ans;
}

