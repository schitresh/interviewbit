void recur(int i, vector<int> &ans){
    if(i==1){ ans.push_back(0); ans.push_back(1); return;}
    recur(i-1, ans);
    int k = pow(2,i-1);
    for(int j=ans.size()-1; j>=0; j--) ans.push_back(k+ans[j]);
}
vector<int> Solution::grayCode(int A) {
    vector<int> ans;
    recur(A, ans);
    return ans;
}

