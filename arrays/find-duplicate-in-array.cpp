int Solution::repeatedNumber(const vector<int> &arr) {
    int n = arr.size()-1;
    int sq = sqrt(n);
    int range = (n / sq) + 1; 
    int count[range];
    for(int i = 0; i < range; i++) count[i] = 0;
    
    for (int i = 0; i <= n; i++) 
    { 
        count[(arr[i] - 1) / sq]++; 
    }
    
    int selected_block = range - 1; 
    for (int i = 0; i < range - 1; i++) 
    { 
        if (count[i] > sq) 
        { 
            selected_block = i; 
            break; 
        } 
    }
    
    unordered_map<int, int> m; 
    for (int i = 0; i <= n; i++) 
    {
        if ( ((selected_block * sq) < arr[i]) && 
                (arr[i] <= ((selected_block + 1) * sq))) 
        { 
            m[arr[i]]++; 
            if (m[arr[i]] > 1) 
                return arr[i]; 
        } 
    } 
    return -1; 
}
