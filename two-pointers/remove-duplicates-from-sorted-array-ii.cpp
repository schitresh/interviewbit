int Solution::removeDuplicates(vector<int> &A) {
    int k=0, n=A.size();
    for(int i = 0; i < n; i++){
        if(i < n-2 && A[i]==A[i+1] && A[i]==A[i+2]) continue;
        else A[k++]=A[i];
    }
    A.erase(A.begin()+k, A.begin()+n);
    return A.size();
}

