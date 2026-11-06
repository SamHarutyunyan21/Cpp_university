int countingValleys(int steps, string path) {
    size_t changings = 0;
    int valleys = 0;

    for (size_t i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            changings++;
            
            if (changings == 0) {
                valleys++;
            }
        } 
        else 
            changings--;
        
    }

    return valleys;
}