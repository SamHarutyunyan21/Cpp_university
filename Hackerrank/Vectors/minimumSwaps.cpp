int minimumSwaps(vector<int> arr) {
    size_t len = arr.size();
    size_t swaps = 0;
    
    for(size_t i = 0; i < len; i++){
        while(arr[i] != i + 1){
            int correct_i = arr[i] - 1;
            int tmp = arr[i];
            arr[i] = arr[correct_i];
            arr[correct_i] = tmp;
            swaps ++;
        }
    }
    return swaps;
}
