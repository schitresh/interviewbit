int Solution::solve(vector<string> &A) {
    int n = A.size();
    long int m = pow(10,9)+7;
    vector<long long int> t;
    for(int i=0; i<n; i++){
        string temp = A[i];
        rotate(temp.begin(), temp.begin()+1, temp.end());
        long long int k = 1, it = 1;
        int tn = temp.size();
        // cout<<tn<<endl;
        while(temp!=A[i]){
            // cout<<k<<endl;
            it++;
            k = it%tn;
            // cout<<k<<" "<<temp<<endl;
            rotate(temp.begin(), temp.begin()+k, temp.end());
            if(A[i]==temp) cout<<it<<" ";
        }
        t.push_back(it);
    }
    
    int ans = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        int k=0;
        // cout<<t[i]<<"..";
        for(int j=0; j<n; j++){
            // cout<<k;
            if(i==j || t[j]==0) continue;
            if(t[i]%t[j]==0 && t[i]/t[j]!=0) k++;
        }
        
        if(count < k){
            count = k;
            ans = t[i];
        }
    }
    return ans%m;
}
