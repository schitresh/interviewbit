int Solution::findMedian(vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size();
    int count = (n * m + 1) / 2;

    int min = A[0][0], max = A[0][m-1];
    for(int i = 1; i < n; i++){
        if(A[i][0] < min) min = A[i][0];
        if(A[i][m-1] > max) max = A[i][m-1];
    }

    while(min < max){
        int mid = (min + max) / 2;
        int k = 0;

        for(int i = 0; i < n; ++i){
           k += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin(); 
        }

        if(k < count) min = mid + 1;
        else max = mid;
    }

    return min;
}

