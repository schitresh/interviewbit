int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int n = A.size();
    int x=0, z=n-1;
    long long int ans = A[0]+A[1]+A[2];
    while(x+1<z){
        int y = x+1;
        z = n-1;
        while(y<z){
            long long int k = A[x]+A[y]+A[z];
            if(abs(B-k)<abs(B-ans)) ans = k;
            if(k<B) y++;
            else z--;
        }
        x++;
    }
    return ans;
}
