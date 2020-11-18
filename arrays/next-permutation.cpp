vector<int> Solution::nextPermutation(vector<int> &A) {
    int n = A.size();
    for(int i=n-1; i>0; i--){
        if(A[i-1] < A[i]){
            reverse(A.begin()+i, A.end());
            
            int j=i;
            while(A[i-1] > A[j]) j++;
            swap(A[i-1], A[j]);
            
            return A;
        }
    }
    reverse(A.begin(), A.end());
    return A;
}
