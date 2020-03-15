int Solution::isPower(int A) {
    if(A==0) return 0;
    if(A==1) return 1;
    for(int i=2; i<=sqrt(A); i++){
        float k = log(A)/log(i);
        if(k == (int)k) return 1;
    }
    return 0;
}

