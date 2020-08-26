bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int i, n=arrive.size();
    vector<pair<int,int>> v;
    
    for(i=0; i<n; i++){
        v.push_back(make_pair(arrive[i], 1));
        v.push_back(make_pair(depart[i], 0));
    }
    sort(v.begin(), v.end());
    
    for(i=0; i<v.size(); i++){
        if(v[i].second == 1) K--;
        else K++;
        if(K<0) return 0;
    }
    return 1;
}
