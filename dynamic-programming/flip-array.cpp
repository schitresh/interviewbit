int Solution::solve(const vector<int> &A) {
    long sum = 0;
    for(int i: A) sum += i;
    long half_sum = sum/2;
    
    vector<long> flips(half_sum + 1, INT_MAX);
    flips[0] = 0;
    
    for(int i=0; i<A.size(); i++){
        for(int j=half_sum; j>=A[i]; j--){
            flips[j] = min(flips[j], flips[j-A[i]] + 1);
        }
    }
    
    for(int i=half_sum; i>=0; i--){
        if(flips[i] != INT_MAX) return flips[i];
    }
}

