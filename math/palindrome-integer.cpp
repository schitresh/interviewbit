int Solution::isPalindrome(int A) {
    int r=0,n=A;
    while(A>0){
        r = r*10 + A%10;
        A /= 10;
    }
    return r==n;
}

