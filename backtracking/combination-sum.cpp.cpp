vector<vector<int>> ans;
void comb(int i, int sum, int B, vector<int> &cur, vector<int> A){
    if(sum == B) if(find(ans.begin(), ans.end(), cur) == ans.end()) ans.push_back(cur);
    if(sum >= B || i>= A.size()) return;
    
    for(int j=i; j<A.size(); j++){
        cur.push_back(A[j]);
        comb(j, sum+A[j], B, cur, A);
        comb(j+1, sum+A[j], B, cur, A);
        cur.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    ans.clear();
    vector<int> cur;
    sort(A.begin(), A.end());
    comb(0, 0, B, cur, A);
    return ans;
}

Alternative Solution:

vector<vector<int>> ans;
void comb(int i, int sum, int B, vector<int> &cur, vector<int> A){
    if(sum == B) ans.push_back(cur);
    if(sum >= B || i>= A.size()) return;
    
    for(int j=i; j<A.size(); j++){
        cur.push_back(A[j]);
        comb(j, sum+A[j], B, cur, A);
        cur.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    ans.clear();
    vector<int> cur;
    sort(A.begin(), A.end());
    int k=1;
    for(int i=1; i<A.size(); i++){
        if(A[i-1]==A[i]) continue;
        A[k++] = A[i]; 
    }
    A.erase(A.begin()+k, A.end());
    comb(0, 0, B, cur, A);
    return ans;
}
