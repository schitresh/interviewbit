int Solution::strStr(const string A, const string B) {
    int n = A.size();
    for(int i=0; i<n; i++){
        int j=0, k=i;
        while(A[k] == B[j]){
            k++; j++;
            if(j==B.size()) return i;
        }
    }
    return -1;
}

Alternative Solution: Using KMP

vector<int> create_lps(string B){
    int m = B.size();
    vector<int> lps(m,0);
    lps[0]=0;
    int i=0, j=1;
    while(j < m){
        if(B[i]==B[j]) lps[j++] = ++i;
        else{
            if(i!=0) i = lps[i-1];
            else lps[j++] = 0;
        }
    }
    return lps;
}

int kmp(string A, string B){
    int n = A.size();
    int m = B.size();
    vector<int> lps = create_lps(B);
    int i=0, j=0;
    while(i < n){
        if(A[i]==B[j]){ i++; j++;}
        if(j==m) return i-j;
        else if(i<n && A[i]!=B[j]){
            if(j!=0) j=lps[j-1];
            else i++;   
        }
    }
    return -1;
}

int Solution::strStr(const string A, const string B) {
    int n = A.size();
    int m = B.size();
    
    return kmp(A,B);
}

