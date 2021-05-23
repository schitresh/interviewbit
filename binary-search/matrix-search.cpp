 int Solution::searchMatrix(vector<vector<int> > &A, int B) {
     int sz = A.size(), sz0 = A[0].size();
     int low = 0; high = sz - 1, mid;
     
     while(low < high - 1){
         mid = (low + high) / 2;
         if(A[mid][0] < B) low = mid;
         else if(A[mid][0] > B) high = mid - 1;
         else return 1;
     }
     
     if(low + 1 < sz && A[low + 1][0] <= B) low++;
     
     row = low;
     low=0; high=sz0 - 1;
     
     while(low <= high){
         mid = (low + high) / 2;
         if(A[row][mid] < B) low = mid + 1;
         else if(A[row][mid] > B) high = mid - 1;
         else return 1;
     }
     return 0;
 }

