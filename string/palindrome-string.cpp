bool valid(char a){
    a = tolower(a);
    return (a>='0' && a<='9') || (a>='a' && a<='z');
}
 
int Solution::isPalindrome(string A) {
    int n = A.size();
    int i = 0, j = n - 1, k = 0;

    while(i < j){
        while(!valid(A[i])) i++;
        while(!valid(A[j])) j--;
        if(tolower(A[i]) != tolower(A[j])) return 0;
        i++; j--;
    }
    return 1;
}

