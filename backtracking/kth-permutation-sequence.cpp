int fact(int i){
    if(i>12) return INT_MAX;
    int k=1;
    while(i){  k *= i; i--; }
    return k;
}

string recur(int i, vector<int> &num){
    int n = num.size();
    if(n==0 || i>fact(n)) return "";
    int f = fact(n-1);
    int j = i/f;
    string s = to_string(num[j]);
    num.erase(num.begin() + j);
    return s + recur(i%f, num);
}

string Solution::getPermutation(int A, int B) {
    vector<int> num;
    
    for(int i=1; i<=A; i++) num.push_back(i);
    return recur(B-1, num);
}
