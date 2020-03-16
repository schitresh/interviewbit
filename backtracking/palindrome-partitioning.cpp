bool ispalin(string str){
    string rstr = str;
    reverse(rstr.begin(), rstr.end());
    return str == rstr;
}

vector<vector<string> > Solution::partition(string A) {
    int n = A.size();
    vector<vector<string>> ans;
    
    for(int i=1; i<=n; i++){
        string init = A.substr(0,i);
        if(ispalin(init)){
            string rem = A.substr(i);
            if(rem.size()>0){
                vector<vector<string>> curr = partition(rem);
                
                for(auto temp: curr){
                    temp.insert(temp.begin(),init);
                    ans.push_back(temp);
                }
            }
            else{
                vector<string> temp = {init};
                ans.push_back(temp);
            }
        }
    }
    
    return ans;
}

