int Solution::removeElement(vector<int> &A, int B) {
    int k=0, n=A.size();
    for(int i=0; i < n ; i++){
        if(A[i]==B) continue;
        A[k++]=A[i];
    }
    
    A.erase(A.begin()+k, A.end());
    return A.size();
}

