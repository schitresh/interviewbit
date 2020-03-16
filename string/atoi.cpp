int Solution::atoi(const string A) {
    int i=0;
    string nu="";
    int k=0;
    while(A[i]==' ') i++;
    
    if(A[i]=='-'){ nu = '-'; i++;}
    if(A[i]=='+') i++;

    while(A[i]>='0' && A[i]<='9') nu += A[i++];
    if(nu.length()==0 || nu=="-") return 0;
    
    try{
        return stoi(nu);
    }
    catch(out_of_range){
        if(nu[0]=='-') return INT_MIN;
        return INT_MAX;
    }
}
