// Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.

// Example:

		
// Input: 	

// 1 2 3
// 4 5 6
// 7 8 9

// Return the following :

// [ 
//   [1],
//   [2, 4],
//   [3, 5, 7],
//   [6, 8],
//   [9]
// ]


// Input : 
// 1 2
// 3 4

// Return the following  : 

// [
//   [1],
//   [2, 3],
//   [4]
// ]
vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int i,j;
    int n = A.size();
    int row,col;
    vector<vector<int>> res(n);
    for(i=0;i<n;i++){
        row = 0;
        col = i;
        res[i].push_back(A[row][col]);
        row=row+1;
        col = col-1;
        while(row>=0 && row<n && col>=0 && col<n){
            res[i].push_back(A[row][col]);
            row++;
            col--;
        }
    }
    // for(i=1;i<n;i++){
    //     row=i;
    //     col=n-1;
    //     res[i+n-1].push_back(A[row][col]);
    //     row=row+1;
    //     col = col-1;
    //     while(row>=0 && row<n && col>=0 && col<n){
    //         res[i+n-1].push_back(A[row][col]);
    //         row++;
    //         col--;
    //     }
        
    // }
    return res;
}
