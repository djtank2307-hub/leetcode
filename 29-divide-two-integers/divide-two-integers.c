int divide(int dividend, int divisor) {
 if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    // Determine sign
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    // Work with positive values
    long long a = dividend;
    long long b = divisor;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    long long cnt = 0;
// Efficient subtraction using doubling
    while (a >= b) {
        long long temp = b, multiple = 1;
        while (a >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        a -= temp;
        cnt += multiple;
    }
    cnt = sign * cnt;
 // Clamp result to int range
    if (cnt > INT_MAX) return INT_MAX;
    if (cnt < INT_MIN) return INT_MIN;
    return (int)cnt;
}