void generate(int i, vector<int> &cur, vector<int> &A,vector<vector<int>> &ans){
    ans.push_back(cur);
    
    for(int j=i; j<A.size(); j++){
        cur.push_back(A[j]);
        generate(j+1, cur, A, ans);
        cur.pop_back();
    }
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int> cur;
    vector<vector<int>> ans;
    sort(A.begin(), A.end());
    generate(0, cur, A, ans);

    return ans;
}

