int Solution::solve(string A) {
    int k = A.size()-1;
    int i = 0, j=k;
    
    while(i<j){
        if(A[i]==A[j]){
            i++; j--;
        }
        else{
            i=0; j=--k;
        }
    }

    return A.length()-1-k;
}
