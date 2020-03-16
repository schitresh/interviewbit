int Solution::isNumber(const string A) {
    int n=A.length();
    if(n==0) return 0;
    map<char,bool> m;
    m['.']=false;
    m['e']=false;
    int i=0;
    while(A[i]==' '){ i++; if(i>=n) return 0;} 
    while(A[n-1]==' ') n--;
    for(; i<n; i++){
        if(A[i]<'0' || A[i]>'9'){
            if(A[i]=='.'){
                if(m['.'] || m['e'] || i==n-1 || A[i+1]=='e') return 0;
                m['.'] = true;
            }
            else if(A[i]=='e'){
                if(m['e']) return 0;
                m['e'] = true;
            }
            else if(A[i]=='-' || A[i]=='+'){
                if(m['e']==false && i!=0) return 0;
                if(i==n-1 || (A[i+1]<'0' && A[i+1]>'9')) return 0;
            }
            else return 0;
        }
    }
    return 1;
}
