vector<int> Solution::getRow(int A) {
    vector<int> v;
    vector<int> w;
    v.push_back(1);
    
    for(int i=1; i<=A; i++){
        w.clear();
        w.push_back(1);
        
        for(int j=0; j<i-1; j++){
            w.push_back(v[j]+v[j+1]);
        }
        
        w.push_back(1);
        v.assign(w.begin(), w.end());
    }
    return v;
}
