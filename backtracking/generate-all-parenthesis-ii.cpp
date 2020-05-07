void parenthesis(string s, vector<string> &ans, int i, int j, int A){
    if(i == A && i==j){
        ans.push_back(s);
        return;
    }
    if(i<A) parenthesis(s+"(", ans, i+1, j, A);
    if(j<i) parenthesis(s+")", ans, i, j+1, A);
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> ans;
    parenthesis("", ans, 0, 0, A);
    return ans;
}

