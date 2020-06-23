// Reverse digits of an integer.

// Example1:

// x = 123,

// return 321
// Example2:

// x = -123,

// return -321

// Return 0 if the result overflows and does not fit in a 32 bit signed integer
int Solution::reverse(int A) {
    long long res=0;
    int n = A;
    while(n){
        res=res*10+n%10;
        if(res>INT_MAX||res<INT_MIN) return 0;
        n=n/10;
    }
    return res;
}
