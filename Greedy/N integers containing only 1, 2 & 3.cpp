// Example Input
// Input 1:

//  A = 3
// Input 2:

//  A = 7


// Example Output
// Output 1:

//  [1, 2, 3]
// Output 2:

//  [1, 2, 3, 11, 12, 13, 21]

vector<int> Solution::solve(int A) {
    queue<int> q;
    int c=0;
    int n = A%3;
    int size;
    int i;
    vector<int> res(A);
    if(n!=0){
        size=A+(3-n);
    }
    else
        size = A;
    if(q.size()<=size){
        q.push(1);
        q.push(2);
        q.push(3);
    }
     while(q.size()<=size || c<A){
         res[c++]=q.front();
         int t = q.front();
         q.pop();
         q.push(10*t+1);
         q.push(10*t+2);
         q.push(10*t+3);
     }
     return res;
}
