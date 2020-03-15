string Solution::convertToTitle(int A) {
    string ans="";
    while(A){
        int j = A%26;
        A = A/26;
        if(j==0){ ans += 'Z'; A--;}
        else ans += 'A' + j-1;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

