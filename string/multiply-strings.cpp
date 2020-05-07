string Solution::multiply(string A, string B) {
    if(A=="0" || B=="0") return "0";
    int na = A.size(), nb = B.size();
    string ans="";
    for(int i=nb-1; i>=0; i--){
        string temp=string(nb-1-i,'0');
        int c=0;
        for(int j=na-1; j>=0; j--){
            int mul = (A[j]-'0')*(B[i]-'0') + c;
            temp += to_string(mul%10);
            c = mul/10;
        }
        if(c!=0) temp += to_string(c);
        string ta="";
        c=0;
        for(int i=0; i<temp.size(); i++){
            int add = (i<ans.size() ? ans[i]-'0' : 0) + (temp[i]-'0') + c;
            ta += to_string(add%10);
            c = add/10;
        }
        if(c!=0) ta += to_string(c);
        ans = ta;
    }
    
    reverse(ans.begin(), ans.end());
    int i=0;
    while(ans[i]=='0') i++;
    return ans.substr(i);
}
