vector<int> rotLeft(vector<int> a, int d) {
    int len = a.size();
    vector<int> arr(len);
    int k = 0;
    
    
    for(int i = d; i < len; i++){
        arr[k++] = a[i];
    }
    
    for(int i = 0; i < d; i++){
        arr[k++] = a[i];
    }
    return arr;
}
