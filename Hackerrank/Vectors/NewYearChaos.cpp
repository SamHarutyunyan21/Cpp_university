void minimumBribes(vector<int> q) {
    int bribes = 0;
    int len = q.size();
    
    for (int i = 0; i < len; i++) {
        if (q[i] - 1 - i > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        
        for (int j = max(0, q[i] - 2); j < i; j++) {
            if (q[j] > q[i]) bribes++;
        }
    }
    
    cout << bribes << endl;
}
