vector<vector<int>> ans;
void recur(int i, vector<int> &A){
    if(i==A.size()){ ans.push_back(A); return; }
    
    for(int j=i; j<A.size(); j++){
        swap(A[i], A[j]);
        recur(i+1, A);
        swap(A[i], A[j]);
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    ans.clear();
    vector<int> cur;
    recur(0, A);
    return ans;
}

