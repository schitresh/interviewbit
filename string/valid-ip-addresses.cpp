vector<string> ipset(string A, int turn) {
    vector<string> ans;
    if(turn>4 || (turn==4 && A.size()>3)) return ans;

    int n = A.size();
    int i=0;
    string k="";
    while(i<3 && i<n){
        k = k+A[i];
        if(stoi(k) > 255) break;
        vector<string> temp = ipset(A.substr(i+1,n-1-i), turn+1);
        for(int j=0; j<temp.size(); j++){
            ans.push_back(k+"."+temp[j]);
        }
        if(i==n-1 && turn==4) ans.push_back(k);
        i++;
        if(k=="0") i=3;
    }
    
    return ans;
}

vector<string> Solution::restoreIpAddresses(string A) {
    return ipset(A,1);
}
