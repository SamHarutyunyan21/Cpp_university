int hourglassSum(vector<vector<int>> arr) {
    int max_sum = INT32_MIN;
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            int sum = 0;
            sum += arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            if (sum > max_sum) max_sum = sum;
        }
    }
    return max_sum;
}
