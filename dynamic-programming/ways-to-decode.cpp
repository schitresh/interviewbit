int paths(string A, vector<int> &cur, int i){
    int n = A.size();
    if(A[i]=='0') return 0;
    if(i==n-1) cur[i]=1;
    if(i>=n-1) return 1;
    if(cur[i]) return cur[i];
    
    int one=0, two=0;
    one = paths(A, cur, i+1);
    if(i+1 < n && stoi(A.substr(i,2)) <= 26) two = paths(A, cur, i+2);
    cur[i] = one + two;
    return cur[i];
}

int Solution::numDecodings(string A) {
    int ans=0;
    vector<int> cur(A.size(),0);
    return paths(A,cur,0);
}

Alternative solution:

int Solution::numDecodings(string A) {
    int n = A.size();
    int cur[n+1] = {0};
    if(A[0]=='0') return 0;

    cur[0] = 1;
    cur[1] = 1;
    for(int i=2; i<=n; i++){
        int val = (A[i-2]-'0')*10 + (A[i-1]-'0');
        if(A[i-1]=='0'){
            if(val == 10 || val == 20) cur[i] = cur[i-2];
            else return 0;
        }
        else if(val > 26) cur[i] = cur[i-1];
        else if(val >= 1 && val <= 9) cur[i] = cur[i-1];
        else cur[i] = cur[i-1] + cur[i-2];
    }

    return cur[n];
}

