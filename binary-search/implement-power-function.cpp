int Solution::pow(int x, int n, int d) {
    long long i = 0, j = 1, result = 1;
    
    if(x == 0) return 0;
    if(n == 0) return 1;

    if(x < 0){
        x = abs(x);
        if(n % 2 != 0) i = 1;
    }

    j = x % d;

    while(n > 0){
        if(n % 2 != 0) result = (result * j) % d;
        j = (j * j) % d;
        n /= 2;
    }
    
    if(i == 1) return d - result;

    return result;
}

