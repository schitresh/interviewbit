vector<vector<int>> ans;
void comb(int i, int sum, vector<int> &cur, vector<int> A){
    if(sum==0) if(find(ans.begin(), ans.end(), cur)==ans.end()) ans.push_back(cur);
    if(sum<=0 || i>=A.size()) return;
    
    for(int j=i; j<A.size(); j++){
        cur.push_back(A[j]);
        comb(j+1, sum-A[j], cur, A);
        cur.pop_back();
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    ans.clear();
    vector<int> cur;
    sort(A.begin(), A.end());
    comb(0, B, cur, A);
    return ans;
}

