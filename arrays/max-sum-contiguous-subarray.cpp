int Solution::maxSubArray(const vector<int> &A) {
    int ans = INT_MIN;
    int sum = 0;
    for(int i: A){
        sum += i;
        sum = max(sum, i);
        ans = max(ans, sum);
    }
    return ans;
}
