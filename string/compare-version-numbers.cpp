int Solution::compareVersion(string A, string B) {
    int na = A.size(), nb = B.size();
    int i=0,j=0;
    string a="",b="";
    while(i<na || j<nb){
        while(i<na && A[i]!='.') a += A[i++];
        while(j<nb && B[j]!='.') b += B[j++];
        int al = a.length();
        int bl = b.length();
        
        if(al > bl) b = string(al-bl,'0') + b;
        else a = string(bl-al,'0') + a;
        
        if(a > b) return 1;
        if(a < b) return -1;
        i++; j++; a=""; b="";
    }
    return 0;
}
