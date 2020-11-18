bool compare(int x, int y){
    return x*pow(10,to_string(y).size()) + y > x + y*pow(10,to_string(x).size());
}

string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> a(n,0);
    for(int i=0;i<n;i++) a[i]=A[i];
    
    sort(a.begin(), a.end(), compare);
    if(a[0]==0) return "0";
    
    string ans = "";
    for(int i=0;i<n;i++){
        ans+=to_string(a[i]);
    }
    return ans;
}
