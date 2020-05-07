void comb(int i, int A, int B, vector<int> &cur, vector<vector<int>> &ans){
    if(cur.size()==B) ans.push_back(cur);
    for(int j=i; j<=A; j++){
        cur.push_back(j);
        comb(j+1, A, B, cur, ans);
        cur.pop_back();
    }
}

vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int>> ans;
    vector<int> cur;
    comb(1, A, B, cur, ans);
    return ans;
}
