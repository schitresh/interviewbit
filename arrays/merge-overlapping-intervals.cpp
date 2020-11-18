bool cmp(Interval a,Interval b){
    return a.start<b.start;
}
 
vector<Interval> Solution::merge(vector<Interval> &A) {
    int n = A.size();
    if(n==0) return A;
    sort(A.begin(),A.end(),cmp);
    
    vector<Interval> ans;
    ans.push_back(A[0]);
    
    for(int i=1; i<n; i++){
        if(A[i].start > ans[ans.size()-1].end) ans.push_back(A[i]);
        else if(A[i].end > ans[ans.size()-1].end)
        ans[ans.size()-1].end = A[i].end;
    }
    
    return ans;
}
