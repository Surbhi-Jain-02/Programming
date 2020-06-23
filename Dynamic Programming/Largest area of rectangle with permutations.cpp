// Problem Description

// Given a binary grid A of size N x M consisting of 0's and 1's, find the area of the largest rectangle inside the grid such that all the cells inside the chosen rectangle should have 1 in them.

// You are allowed to permutate the columns matrix i.e. you can arrange each of the column in any order in the final grid.

// Please follow the sample input and explanation for more clarity.



// Input Format
// First and only argument is an 2D binary array A.



// Output Format
// Return a single integer denoting the area of the largest rectangle inside the grid such that all the cells inside the chosen rectangle should have 1 in them.



// Example Input
// Input 1:

//  A = [  [1, 0, 1]
//         [0, 1 ,0]
//         [1, 0, 0]
//     ]
int Solution::solve(vector<vector<int> > &A) {
    int i,j;
    int res[A.size()][A[0].size()];
    for(j=0;j<A[0].size();j++){
        res[0][j]=A[0][j];
        for(i=0;i<A.size();i++){
            
        }    
    }
}

