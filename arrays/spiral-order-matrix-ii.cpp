vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> v(A, vector<int>(A));
    int c=A;
    if(c%2!=0) c++;
    c/=2;
    
    int i=0, j=1, k=0;
    while(c--){
        t=n-k-1;
        for(i=k; i<=t; i++){v[k][i]=j++;}
        for(i=k+1; i<=t; i++){v[i][t]=j++;}
        for(i=t-1; i>=k; i--){v[t][i]=j++;}
        for(i=t-1; i>k; i--){v[i][k]=j++;}
        k++;
    }
    return v;
}
