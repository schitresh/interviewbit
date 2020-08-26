vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> v;
    int i=1, j=0, k=1;
    if(A>0) v.push_back(vector<int> (1,1));
    
    while(i<A){
        vector<int> w;
        for(j=0; j<=i; j++){
            int r = j>i-1 ? 0 : v[i-1][j];
            int s = j-1<0 ? 0 : v[i-1][j-1];
            w.push_back(r+s);
        }
        v.push_back(w);
        i++;
    }
    return v;
}

//Alternate

vector<vector<int> > Solution::generate(int A) {
    vector<vector<int>> a;
    if(A==0) return a;
    vector<int> b;
    b.push_back(1); a.push_back(b);
    if(A==1) return a;
    
    for(int i=1; i<A; i++){
        vector<int> c;
        c.push_back(1);
        for(int j=0; j<a[i-1].size()-1; j++){
            c.push_back(a[i-1][j]+a[i-1][j+1]);
        }
        c.push_back(1);
        a.push_back(c);
    }
    return a;
}
