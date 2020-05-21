bool check(vector<int> &A, int k){
    if(k >= A.size()-1) return true;
    for(int i=A[k]; i>0; i--){
        if(check(A, k+i)) return true;
        else A[k+i]=0;
    }
    return false;
}
int Solution::canJump(vector<int> &A) {
    return check(A, 0);
}

Alternative Solution:

int Solution::canJump(vector<int> &A) {
    int steps = A[0];
    int n = A.size();
    for(int i=1; i<n; i++){
        if(steps==0) return 0;
        steps--;
        steps = max(steps, A[i]);
    }
    return 1;
}

