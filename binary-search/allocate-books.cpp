bool possible(vector<int> &A, int B, int m){
    int a = 1, sum = 0;
    for(int i=0; i<A.size(); i++){
        sum += A[i];
        if(sum > m){
            a++;
            sum = A[i];
            if(a > B) return false;
        }
    }
    return true;
}

int Solution::books(vector<int> &A, int B) {
    int n = A.size();
    if(n<B) return -1;
    
    int maxi = INT_MIN, sum = 0;
    
    for(int i=0; i<n; i++){
        maxi = max(maxi, A[i]);
        sum += A[i];
    }
    
    int ans = INT_MAX, l=maxi, r=sum;
    
    while(l<=r){
        int m = (l+r)/2;
        if(possible(A,B,m)){
            ans = min(ans, m);
            r = m-1;
        }
        else l = m+1;
    }
    return ans;
}
