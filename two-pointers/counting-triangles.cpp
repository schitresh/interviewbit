int Solution::nTriang(vector<int> &A) {
    sort(A.begin(), A.end());
    long int ans=0, mod = pow(10,9)+7;
    int n = A.size();
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
           ans += lower_bound(A.begin(), A.end(), A[i]+A[j])-(A.begin()+j+1);
           ans %= mod;
        }
    }
    return ans;
}

Alternate Solution:

int Solution::nTriang(vector<int> &A) {
    sort(A.begin(), A.end());
    long int ans=0, mod = pow(10,9)+7;
    int n = A.size();
    for(int i=2; i<n; i++){
        int left=0, right=i-1;
        while(left<right){
            if(A[left]+A[right]>A[i]){
                ans += right-left;
                ans %= mod;
                right--;
            }
            else left++;
        }
    }
    return ans;
}

