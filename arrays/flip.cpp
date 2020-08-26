vector<int> Solution::flip(string A) {
    int n=A.size();
    vector<int> v;
    int i=0, s;
    int l, L=-1,R=-1;
    while(i<n && A[i]=='1') i++;
    if(i<n){ l=i; L=i; R=i;}
 
    while(i<n){
        if(A[i]=='0') k++;
        else k--;
        
        if(k>s){
            s=k;
            L=l;
            R=i;
        }
        if(k<0){
            k=0; l=i+1;
        }
        i++;
    }
    if(L!=-1){
        v.push_back(L+1);
        v.push_back(R+1);
    }
    return v;
}
