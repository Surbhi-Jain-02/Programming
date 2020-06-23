// ven two sequences A, B, count number of unique ways in sequence A, to form a subsequence that is identical to the sequence B.

// Subsequence : A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, “ACE” is a subsequence of “ABCDE” while “AEC” is not).

// Input Format:

// The first argument of input contains a string, A.
// The second argument of input contains a string, B.
// Output Format:

// Return an integer representing the answer as described in the problem statement.
// Constraints:

// 1 <= length(A), length(B) <= 700
// Example :

// Input 1:
//     A = "abc"
//     B = "abc"
    
// Output 1:
//     1

int Solution::numDistinct(string A, string B) {
    int l2 = B.length();
    int l1 = A.length();
    int i,j;
    if(l2>l1)
        return 0;
    int res[l2+1][l1+1];
    for(i=1;i<=l2;i++){
        res[i][0]=0;
    }
    for(j=0;j<=l1;j++){
        res[0][j]=1;
    }
    for(i=1;i<=l2;i++){
        for(j=1;j<=l1;j++){
            if(B[i-1]==A[j-1]){
                res[i][j]=res[i-1][j-1]+res[i][j-1];
            }
            else
                res[i][j]=res[i][j-1];
    }
    }
    return res[l2][l1];
}
