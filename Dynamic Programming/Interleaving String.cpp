// Given A, B, C, find whether C is formed by the interleaving of A and B.

// Input Format:*

// The first argument of input contains a string, A.
// The second argument of input contains a string, B.
// The third argument of input contains a string, C.
// Output Format:

// Return an integer, 0 or 1:
//     => 0 : False
//     => 1 : True
// Constraints:

// 1 <= length(A), length(B), length(C) <= 150
// Examples:

// Input 1:
//     A = "aabcc"
//     B = "dbbca"
//     C = "aadbbcbcac"

// Output 1:
//     1
    
// Explanation 1:
//     "aa" (from A) + "dbbc" (from B) + "bc" (from A) + "a" (from B) + "c" (from A)

int Solution::isInterleave(string A, string B, string C) {
    string k = A+B;
    sort(k.begin(),k.end());
    sort(C.begin(),C.end());
    if(k==C)
        return 1;
    return 0;
}
