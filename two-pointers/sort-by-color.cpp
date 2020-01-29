void Solution::sortColors(vector<int> &A) {
    int n=A.size();
    int a[3]={0};
    for(int i=0; i<n; i++){
        a[A[i]]++;
    }
    int j=0;
    for(int i=0; i<n; i++){
        if(a[j]==0) j++;
        a[j]--;
        A[i]=j;
    }
}

