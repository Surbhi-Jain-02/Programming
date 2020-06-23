// Problem Description

// Given an integer array A of non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.



// Problem Constraints
// 1 <= |A| <= 100000



// Input Format
// The only argument given is integer array A.



// Output Format
// Return the total water it is able to trap after raining.



// Example Input
// Input 1:

//  A = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
// Input 2:

//  A = [1, 2]
int Solution::trap(const vector<int> &A) {
    int low_max=0;
    int high_max=0;
    int result =0;
    int l=0,h=A.size()-1;
    while(l<=h){
        if(A[l]<A[h]){
            if(low_max<A[l])
                low_max = A[l];
            else
                result = result + low_max-A[l];
             l++;
        }
        else{
            if(high_max<A[h])
                high_max = A[h];
            else
                result = result + high_max - A[h];
            h--;
        }
    }
    return result;
}
