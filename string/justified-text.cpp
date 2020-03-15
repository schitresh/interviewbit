vector<string> Solution::fullJustify(vector<string> &A, int B) {
    int n = A.size();
    vector<string> ans;
    if(n==0) return ans;
    
    int i=0;
    while(i<n){
        int s=0, l=i;
        while(i<n){
            s += A[i].size();
            if(s>B){ s -= A[i].size()+1; break;}
            s++; i++;
        }
        
        string a="";
        int w = i-1-l;
        int total_space = B-(s-w);
        int space = w!=0 ? total_space/w : 1;
        int rem = total_space - space*w;
        
        if(i==n){ space=1; rem=0;}
        for(int j=l; j<i-1; j++){
            a += A[j] + string(space,' ');
            if(rem){ a += ' '; rem--; }
        }
        a += A[i-1];
        a += string(B-a.length(),' ');
        ans.push_back(a);
    }
    
    return ans;
}
