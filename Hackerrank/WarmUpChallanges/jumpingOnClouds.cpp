
int jumpingOnClouds(vector<int> c) {
    size_t len = c.size();
    int jumps = 0;
    size_t i = 0;
    while(i < n -1){
        if(c[i+2]==0){
            jumps++;
            i+=2;
        }
        else if(c[i+1]==0){
            jumps++;
            i++;
        }
    }
    return jumps;
}
