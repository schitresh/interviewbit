vector<int> Solution::searchRange(const vector<int> &A, int B) {
   int n = A.size();
   int l = 0, r = n-1;
   int L = -1, R = -1, m;

   while(l <= r){
       m = (l + r) / 2;
       if(A[m] <= B){
           l = m+1; 
           if(A[m] == B) R = m;
       }
       else r = m - 1;
   }

   l = 0; r = R;

   while(l <= r){
       m = (l + r) / 2;
       if(A[m] >= B){
           r = m - 1;
           if(A[m] == B) L = m;
       }
       else l = m + 1;
   }

   vector<int> v;
   v.push_back(L);
   v.push_back(R);
   return v;
}

