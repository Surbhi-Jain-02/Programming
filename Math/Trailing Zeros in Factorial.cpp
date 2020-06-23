// Given an integer A, return the number of trailing zeroes in A!.

// Note: Your solution should be in logarithmic time complexity.



// **Problem Constraints**
// 1 <= A <= 10000



// **Input Format**
// First and only argumment is integer A.



// **Output Format**
// Return an integer, the answer to the problem.



// **Example Input**
// Input 1:

//  A = 4
// Input 2:

//  A = 5

int Solution::trailingZeroes(int A) {
    int count=0;
    while(A!=0){
       count = count+A/5;
       A=A/5;
    }
    return count;
}
