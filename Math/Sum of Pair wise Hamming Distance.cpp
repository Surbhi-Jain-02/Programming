// Hamming distance between two non-negative integers is defined as the number of positions at which the corresponding bits are different.

// Given an array A of N non-negative integers, find the sum of hamming distances of all pairs of integers in the array. Return the answer modulo 1000000007.



// Problem Constraints
// 1 <= |A| <= 200000

// 1 <= A[i] <= 109



// Input Format
// First and only argument is array A.



// Output Format
// Return one integer, the answer to the problem.

int Solution::hammingDistance(const vector<int> &A) {
    int i;
    int res=0;
    int n=A.size();
    long long int mod = 1000000007;
    for(i=0;i<32;i++){
         int count = 0; 
        for (int j = 0; j < n; j++) 
            if ( (A[j] & (1 << i)) ) 
                count = (count%mod+1)%mod; 
  
        // Add "count * (n - count) * 2" to the answer 
        res = (res%mod + ((count * (n - count) * 2))%mod)%mod; 
    }
    return res%mod;
}