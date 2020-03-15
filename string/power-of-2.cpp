int Solution::power(string A) {
    if(A=="1") return 0;
    int n = A.size();
    string s = "1";
    while(s.size()<A.size() || (s.size()==A.size() && s < A)){
        string temp= string(s.size(), ' ');
        int c = 0;
        for(int i=s.size()-1; i>=0; i--){
            int k = (s[i]-'0')*2 + c;
            temp[i] = k%10+'0'; //don't use concat like temp = x + temp O(n), will give TLE
            c = k/10;
        }
        if(c) temp = to_string(c) + temp;
        s = temp;
    }
    if(s==A) return 1;
    return 0;
}
