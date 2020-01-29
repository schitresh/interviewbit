vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans;
    for(int i=1; i<=A; i++){
        string s="";
        int k=0;
        if(i%3==0){ s="Fizz"; k=1; }
        if(i%5==0){ s+="Buzz"; k=1; }
        if(k==0){
            s = to_string(i);
        }
        ans.push_back(s);
    }
    return ans;
}

