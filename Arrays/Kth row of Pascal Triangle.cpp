// Given an index k, return the kth row of the Pascal’s triangle.

// Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

// Example:

// Input : k = 3

// Return : [1,3,3,1]

vector<int> Solution::getRow(int A) {
    int i;
    int count=1;
    vector<int> res(A+1);
    res[0]=count;
    for(i=1;i<=A;i++){
        res[i]=count*(A-i+1)/i;
        count=res[i];
    }
    return res;
}
