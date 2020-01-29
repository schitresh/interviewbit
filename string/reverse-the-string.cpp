string Solution::solve(string A) {
    string word="";
    stack<string> s;
    for(int i=0;i<A.size();i++){
        if(A[i] == ' '){
            s.push(word);
            word = "";
        }
        else word += A[i];
    }
    if(word!="") s.push(word);
    A="";
    while(!s.empty()){
        A.append(s.top());
        s.pop();
        if(!s.empty())A.append(" ");
    }
    return A;
}

