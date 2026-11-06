long repeatedString(string s, long n) {
    size_t len = s.length();
    
    size_t count_a_in_s = 0;
    for (size_t i = 0; i <len; i++) {
        if (s[i] == 'a') {
            count_a_in_s++;
        }
    }
    
    size_t repeats = n / len;
    long count_a = repeats * count_a_in_s;
    
    size_t r = n % len;
    
    for (size_t i = 0; i < r; i++) {
        if (s[i] == 'a') {
            count_a++;
        }
    }
    
    return count_a;
}