vector<vector<int> > Solution::threeSum(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<vector<int>> ans;
    if(A.size()<3) return ans;
    for(int i=0; i<A.size()-2; i++){
        if(i>0 && A[i]==A[i-1]) continue;
        int j=i+1, k=A.size()-1;
        while(j<k){
            int x = A[i]+A[j]+A[k];
            if(x>0) k--;
            else if(x<0) j++;
            else{
                vector<int> temp = {A[i],A[j],A[k]};
                if(ans.size()==0 || ans.back()!=temp) ans.push_back(temp);
                j++;
            }
        }
    }
    return ans;
}
