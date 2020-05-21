int Solution::solve(int A) {
    int mod = 1000000007;
    long int color2 = 12;
    long int color3 = 24;
    
    for(int i=2; i<=A; i++){
        long int temp = color3;
        color3 = (11 * color3 + 10 * color2 ) % mod;
        color2 = ( 5 * temp + 7 * color2 ) % mod;
    }
    
    return (color3 + color2) % mod;
}

