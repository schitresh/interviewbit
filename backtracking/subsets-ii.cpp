vector<vector<int>> ans;
void comb(int i, vector<int> &cur, vector<int> A){
    if(find(ans.begin(), ans.end(), cur)==ans.end()) ans.push_back(cur);
    if(i>=A.size()) return;
    
    cur.push_back(A[i]);
    comb(i+1, cur, A);
    cur.pop_back();
    comb(i+1, cur, A);
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    ans.clear();
    vector<int> cur;
    sort(A.begin(), A.end());
    comb(0, cur, A);
    return ans;
}

