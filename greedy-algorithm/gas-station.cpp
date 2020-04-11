int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int n = A.size(),i,j;
    int a=0, b=0;
    int start=0, tank=0;
    for(i=0; i<n; i++){
        a += A[i];
        b += B[i];
        tank += A[i]-B[i];
        if(tank<0){
            start = i+1;
            tank = 0;
        }
    }
    return a >= b ? start : -1;
}
