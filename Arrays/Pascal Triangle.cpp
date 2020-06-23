// Given numRows, generate the first numRows of Pascal’s triangle.

// Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

// Example:

// Given numRows = 5,

// Return

// [
//      [1],
//      [1,1],
//      [1,2,1],
//      [1,3,3,1],
//      [1,4,6,4,1]
// ]

vector<vector<int> > Solution::solve(int A) {
int i,j;
vector<vector<int>> res(A);
for(i=0;i<A;i++){
    for(j=0;j<=i;j++){
        res[i][j]=1;
    }
}
for(i=2;i<A;i++){
    for(j=1;j<i;j++){
        res[i][j]=res[i-1][j]+res[i-1][j-1];
    }
}
return res;
}
