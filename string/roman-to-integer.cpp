int conv(char a){
    switch(a){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int Solution::romanToInt(string A) {
    int high=INT_MIN;
    int ans=0;
    for(int i=0; i<A.size(); i++){
        if(conv(A[i])<conv(A[i+1]) && i<A.size()-1) ans-=conv(A[i]);
        else ans+=conv(A[i]);
    }
    return ans;
}

