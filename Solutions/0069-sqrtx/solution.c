int mySqrt(int x) {
    for (unsigned long long i = 0; i < INT_MAX; i++) {
        if ((i * i) > x) {
            return (int)(i - 1);
        }
    }
    return 0;
}
