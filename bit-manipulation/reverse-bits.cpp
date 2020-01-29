unsigned int Solution::reverse(unsigned int A) {
    int ans=0;
    int k=0;
    for(int i=0;i<32;i++){
        k = A & 1;
        A >>= 1;
        ans <<= 1;
        ans |= k;
    }
    return ans;
}

