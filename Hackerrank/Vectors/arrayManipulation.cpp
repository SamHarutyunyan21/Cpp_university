long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<int> arr (n,0);
    long max = 0;
    for(size_t i = 0; i < queries.size(); i++){
        for(size_t j = queries[i][0] -1; j < queries[i][1]; j++){
            
                arr[j] += queries[i][2];
        }
    }
    for(size_t i = 0; i < n; i++){
        if(max<arr[i]) max = arr[i];
    }
    return max;
}