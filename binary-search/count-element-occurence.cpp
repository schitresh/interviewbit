int bisearch(const vector<int> &A, int B, int l, int r){
    int L=0,R=0,k=0,m;
    if(l<=r){
        m=(l+r)/2;
        if(A[m]==B) k++;
        L=bisearch(A,B,l,m-1);
        R=bisearch(A,B,m+1,r);
    }
    return L+R+k;
}

int Solution::findCount(const vector<int> &A, int B) {
    return bisearch(A,B,0,A.size()-1);
}

