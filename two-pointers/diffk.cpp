int Solution::diffPossible(vector<int> &A, int B) {
    int i=0, j=i+1, n=A.size();
    while(j<n){
        int k = A[j]-A[i];
        if(k == B) return 1;
        else if(k > B){
            i++;
            if(j<=i) j=i+1;
        }
        else{
            j++;
        }
    }
    return 0;
}

