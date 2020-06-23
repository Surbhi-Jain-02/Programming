// Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

// More formally,

//     G[i] for an element A[i] = an element A[j] such that 
//     j is maximum possible AND 
//     j < i AND
//     A[j] < A[i]
// Elements for which no smaller element exist, consider next smaller element as -1.

// Input Format

// The only argument given is integer array A.
// Output Format

// Return the integar array G such that G[i] contains nearest smaller number than A[i].If no such element occurs G[i] should be -1.
// For Example

// Input 1:
//     A = [4, 5, 2, 10, 8]
// Output 1:
//     G = [-1, 4, -1, 2, 2]
vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> s;
    vector<int> res(A.size());
    int i;
    for(i=0;i<A.size();i++){
        while(!s.empty() && s.top()>=A[i])
            s.pop();
        if(s.empty())
            res[i]=-1;
        else
            res[i]=A[i];
        s.push(A[i]);
    }
    return res;
}
