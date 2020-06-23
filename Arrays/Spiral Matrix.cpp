Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.



Input Format:

The first and the only argument contains an integer, A.
Output Format:

Return a 2-d matrix of size A x A satisfying the spiral order.
Constraints:

1 <= A <= 1000
Examples:

// Input 1:
//     A = 3

// Output 1:
//     [   [ 1, 2, 3 ],
//         [ 8, 9, 4 ],
//         [ 7, 6, 5 ]   ]

// Input 2:
//     4

// Output 2:
//     [   [1, 2, 3, 4],
//         [12, 13, 14, 5],
//         [11, 16, 15, 6],
//         [10, 9, 8, 7]   ]


vector<vector<int> > Solution::generateMatrix(int A) {
int left,right,top,bottom,c=1,i;
vector<vector<int>> res(A,vector<int>(A));
left=0;
right=A-1;
bottom=A-1;
top=0;
int dir=0;
while(top<=bottom && left<=right){
    if(dir==0){
        for(i=left;i<=right;i++){
            res[top][i]=c++;
        }
        top=top+1;
        dir=1;
    }
    else if(dir==1){
        for(i=top;i<=bottom;i++){
            res[i][right]=c++;
        }
        right--;
        dir=2;
    }
    else if(dir==2){
        for(i=right;i>=left;i--){
            res[bottom][i]=c++;
        }
        bottom--;
        dir=3;
    }
    else if(dir==3){
        for(i=bottom;i>=top;i--){
            res[i][left]=c++;
        }
        left++;
        dir=0;
    }
}
return res;
}
