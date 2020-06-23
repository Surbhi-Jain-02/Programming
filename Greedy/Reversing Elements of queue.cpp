// Input 1:

//  A = [1, 2, 3, 4, 5]
//  B = 3
// Input 2:

//  A = [5, 17, 100, 11]
//  B = 2


// Example Output
// Output 1:

//  [3, 2, 1, 4, 5]
// Output 2:

//  [17, 5, 100, 11]



vector<int> Solution::solve(vector<int> &A, int B) {
    queue<int> q;
    int i;
    for(i=B-1;i>=0;i--){
        q.push(A[i]);
    }
    for(i=0;i<B;i++){
        A[i]=q.front();
        q.pop();
    }
    return A;
}
