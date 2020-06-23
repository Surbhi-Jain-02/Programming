// Find the contiguous subarray within an array, A of length N which has the largest sum.
// Input 1:
//     A = [1, 2, 3, 4, -10]

// Output 1:
//     10

// Explanation 1:
//     The subarray [1, 2, 3, 4] has the maximum possible sum of 10.

// Input 2:
//     A = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

// Output 2:
//     6

// Explanation 2:
//     The subarray [4,-1,2,1] has the maximum possible sum of 6.

int Solution::maxSubArray(const vector<int> &A) {
    int i;
    int max_till_here=0;
    int actual_max=0;
    for(i=0;i<A.size();i++){
        max_till_here=max_till_here+A[i];
        if(max_till_here>actual_max)
            actual_max =max_till_here;
        if(max_till_here<0)
            max_till_here =0;
    }
    return actual_max;
}
