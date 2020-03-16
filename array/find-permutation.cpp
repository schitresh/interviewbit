vector<int> Solution::findPerm(const string A, int B) {
    int mini=1, maxi=B;
    vector<int> ans;
    for(int i=0; i<A.size(); i++){
        if(A[i]=='D') ans.push_back(maxi--);
        else ans.push_back(mini++);
    }
    ans.push_back(maxi);
    return ans;
}

