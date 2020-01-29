int Solution::titleToNumber(string A) {
    int n=A.size();
    int ans=0;
    int mul=1;
    for(int i=n-1;i>=0;i--){
        ans+= mul*(int(A[i]-'A')+1);
        mul*=26;
    }
    return ans;
}

