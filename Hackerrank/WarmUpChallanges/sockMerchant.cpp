int sockMerchant(int n, vector<int> ar) {
    int pairs = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] == -1) {
            continue;
        }

        for (int j = i + 1; j < n; j++) {
            if (ar[i] == ar[j]) {
                pairs++;          
                ar[j] = -1;       
                break;            
            }
        }
    }

    return pairs;
}