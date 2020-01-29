int Solution::removeDuplicates(vector<int> &A) {
    int k=0; int n=A.size();
    for(int i=0;i<n;i++){
        if(A[k]!=A[i]){
            A[k+1]=A[i];
            k++;
        }
    }
    A.erase(A.begin()+k+1, A.begin()+n);
    return A.size();
}
