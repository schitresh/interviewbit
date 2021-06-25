int Solution::lengthOfLastWord(const string A) {
    int n = A.size();
    int len = n;
    int k = 0;

    for(int i = 0; i < n; i++){
        if(A[i] == ' ' || i == n - 1){
            len = i - k;
            if(i == n-1 && A[i] != ' ') len++;
            while(A[i+1] == ' ') i++;
            k = i+1;
        }
    }
    return len;
}

