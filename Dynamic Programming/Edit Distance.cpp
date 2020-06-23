// Given two strings A and B, find the minimum number of steps required to convert A to B. (each operation is counted as 1 step.)

// You have the following 3 operations permitted on a word:

// Insert a character
// Delete a character
// Replace a character


// Input Format:

// The first argument of input contains a string, A.
// The second argument of input contains a string, B.
// Output Format:

// Return an integer, representing the minimum number of steps required.
// Constraints:

// 1 <= length(A), length(B) <= 450
// Examples:

// Input 1:
//     A = "abad"
//     B = "abac"

// Output 1:
//     1

int Solution::minDistance(string A, string B) {
    int i,j;
    int l1 = A.length();
    int l2 = B.length();
    int res[l1+1][l2+1];
    for(i=0;i<=l1;i++){
        for(j=0;j<=l2;j++){
            if(i==0){
                res[i][j]=j;
            }
            else if(j==0){
                res[i][j]=i;
            }
            else if(A[i]==B[j]){
                res[i][j]=res[i-1][j-1];
                cout<<res[i][j];
            }
            else{
                res[i][j]= 1 + min(res[i-1][j-1],min(res[i][j-1],res[i-1][j]));
                cout<<res[i][j]<<"";
            }
        }
    }
    return res[l1][l2];
}


