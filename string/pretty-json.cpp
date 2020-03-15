vector<string> Solution::prettyJSON(string A) {
    int n = A.size();
    vector<string> ans;
    string a="";
    int i=0, k=ans.size(), indent=0;
    while(i<n){
        string c(1, A[i++]);
        if(c=="{" || c=="["){
            if(a.size()!=0) ans.push_back(string(indent,'\t') + a);
            ans.push_back(string(indent,'\t') + c);
            indent++;
        }
        else if((c=="}" || c=="]")){
            if(a.size()!=0) ans.push_back(string(indent,'\t') + a);
            indent--;
            if(i<n && A[i]==','){ c+=","; i++;}
            ans.push_back(string(indent,'\t') + c);
        }
        else a += c;
        if(c==","){ ans.push_back(string(indent,'\t') + a); }
        if(ans.size()!=k){ k=ans.size(); a="";}
    }
    return ans;
}
