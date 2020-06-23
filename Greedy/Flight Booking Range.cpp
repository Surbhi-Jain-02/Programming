// Example Input
// Input 1:

// A = 5
// B = [ [1, 2, 10],
//       [2, 3, 20],
//       [2, 5, 25] ]
  
// Input 2:

// A = 5
// B = [ [1, 2, 10],
//       [2, 3, 20],
//       [2, 5, 25] ]


// Example Output
// Output 1:

// [10, 55, 45, 25, 25]
// Output 2:

// [10, 55, 45, 25, 25]


// Example Explanation
// Explanation 1:

 
//  First booking books 10 seats on flights 1 to 2(1 and 2). Final bookings in each flight after first booking: [10, 10, 0, 0, 0]
//  Second booking books 20 seats on flights 2 to 3(2 and 3). Final bookings in each flight after second booking: [10, 30, 20, 0, 0]
//  Third booking books 25 seats on flights 2 to 5(2,3,4,5). Final bookings in each flight after third booking: [10, 55, 45, 25, 25]
// Explanation 2:

 
//  First booking books 10 seats on flights 1 to 2(1 and 2). Final bookings in each flight after first booking: [10, 10, 0, 0, 0]
//  Second booking books 20 seats on flights 2 to 3(2 and 3). Final bookings in each flight after second booking: [10, 30, 20, 0, 0]
//  Third booking books 25 seats on flights 2 to 5(2,3,4,5). Final bookings in each flight after third booking: [10, 55, 45, 25, 25]






vector<int> Solution::solve(int A, vector<vector<int> > &B) {
    long long int res[A];
    vector <int> result(A);
    int i,j;
    int n1;
    long long int sum =0;
    for(i=0;i<A;i++){
        res[i]=0;
    }
    for(i=0;i<B.size();i++){
        n1 =B[i].size();
        res[B[i][0]-1] = res[B[i][0]-1] + B[i][n1-1];
        res[B[i][1]] = res[B[i][1]] + (-B[i][n1-1]);
        
    }
    for(i=0;i<A;i++){
        sum = sum+res[i];
        result[i]=sum;
    }
    return result;
}
