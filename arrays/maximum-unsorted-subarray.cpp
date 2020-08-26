vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size();
    int start=-1, end=-1;

    int temp = A[0];
    for(int i = 1 ; i<n ; i++){
        if(A[i] < temp) end = i;
        temp = max(A[i], temp);
    }
    
    temp = A[n-1];
    for(int i = n-1 ; i>=0 ; i--){
        if(A[i] > temp) start = i;
        temp = min(A[i], temp);
    }
    
    if(start==-1) return vector<int> {-1};
    
    return vector<int> {start,end};
}
