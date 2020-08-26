×
int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int>> v;
    int n = A.size();
    for(int i=0;i<n;i++) v.push_back({A[i],i});
    
    sort(v.begin(),v.end());
    
    int gmax=v[0].second, gmin=v[0].second;
    int lmax=gmax, lmin=gmin;
    
    for(int i=1; i<n; i++){
        lmax = max(lmax, v[i].second);
        if(v[i].second<lmin){
            if(gmax-gmin < lmax-lmin){
                gmax = lmax;
                gmin = lmin;
            }
            lmin = v[i].second;
            lmax = v[i].second;
        }
    }
    
    if(gmax-gmin < lmax-lmin){
        gmax = lmax;
        gmin = lmin;
    }
    // if(gmax==gmin) return -1;
    return gmax-gmin;
}
