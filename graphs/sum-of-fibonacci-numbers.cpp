int Solution::fibsum(int A) {
    vector<int> fib;
    fib.push_back(1); fib.push_back(1);
    while(1){
        int temp = fib[fib.size()-1] + fib[fib.size()-2];
        if(temp > A) break;
        fib.push_back(temp);
    }
    
    int k=A;
    int ans=0;
    while(k>0){
        int j = upper_bound(fib.begin(), fib.end(), k)-fib.begin()-1;
        k -= fib[j];
        ans++;
    }
    return ans;
}

