string sym(int a){
    switch(a){
        case 1: return "I";
        case 5: return "V";
        case 10: return "X";
        case 50: return "L";
        case 100: return "C";
        case 500: return "D";
        case 1000: return "M";
    }
    return "0";
}

string conv(int a, int b){
    string x=sym(b);
    string y=sym(b*5);
    string z=sym(b*10);
    switch(a){
        case 1: return x;
        case 2: return x+x;
        case 3: return x+x+x;
        case 4: return x+y;
        case 5: return y;
        case 6: return y+x;
        case 7: return y+x+x;
        case 8: return y+x+x+x;
        case 9: return x+z;
    }
}

string Solution::intToRoman(int A) {
    string ans="";
    int i;
    
    int k=1000;
    while(k){
        i=A/k;
        if(i) ans += conv(i,k);
        A = A%k;
        k /= 10;
    }
    return ans;
}

