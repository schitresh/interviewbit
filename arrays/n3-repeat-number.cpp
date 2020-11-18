int Solution::repeatedNumber(const vector<int> &A) {
    pair<int,int> a,b;
    int n = A.size();
    
    for(int i=0; i<n; i++){
        if(a.first == A[i]) a.second++;
        else if (b.first == A[i]) b.second++;
        else{
            if(a.second == 0){ a.first=A[i]; a.second++;}
            else if (b.second == 0){ b.first=A[i]; b.second++;}
            else{ a.second--; b.second--;}
        }
    }
    
    int ca=0, cb=0;
    for(int i=0; i<n; i++){
        if(A[i] == a.first) ca++;
        if(A[i] == b.first) cb++;
    }
 
    if(ca > n/3) return a.first;
    if(cb > n/3) return b.first;
    return -1;
}

