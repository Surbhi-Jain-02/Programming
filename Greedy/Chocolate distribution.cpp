// Chocolate Distribution
// Given an array A of N integers where each value represents number of chocolates in a packet.

// i-th can have A[i] number of chocolates.

// There are B number students, the task is to distribute chocolate packets following below conditions:

// 1. Each student gets one packet.
// 2. The difference between the number of chocolates in packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.
// Return the minimum difference (that can be achieved) between maximum and minimum number of chocolates distributed.

// CONSTRAINTS

// 0 <= N <= 10^5
// 1 <= A[i] <= 10^6
// 0 <= B <= 10^5
// SAMPLE INPUT

// A : [3, 4, 1, 9, 56, 7, 9, 12]
// B : 5
// SAMPLE OUTPUT

// 6

int Solution::solve(vector<int> &A, int B) {
    int i,j;
    int n1 = A.size();
    int a = n1+1-B;
    int res[a];
    if(n1==0 || B==0 )
        return 0;
    if(B>n1)
        return -1;
    sort(A.begin(),A.end());
    for(i=0;i+B-1<n1;i++){
        res[i]=A[i+B-1]-A[i];
    }
    sort(res,res+a);
    return res[0];
}
