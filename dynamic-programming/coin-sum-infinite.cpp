int Solution::coinchange2(vector<int> &A, int B) {
    vector<int> count(B+1, 0);
    count[0] = 1;
    
    for(int i=0; i<A.size(); i++){
        for(int j=A[i]; j<=B; j++){
            count[j] = (count[j] + count[j-A[i]]) % 1000007;
        }
    }
    
    return count[B];
}

