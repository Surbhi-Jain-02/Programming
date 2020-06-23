// Given a string A, we may represent it as a binary tree by partitioning it to two non-empty substrings recursively.

// Below is one possible representation of A = “great”:


//     great
//    /    \
//   gr    eat
//  / \    /  \
// g   r  e   at
//            / \
//           a   t
 
// To scramble the string, we may choose any non-leaf node and swap its two children.

// For example, if we choose the node “gr” and swap its two children, it produces a scrambled string “rgeat”.

//     rgeat
//    /    \
//   rg    eat
//  / \    /  \
// r   g  e   at
//            / \
//           a   t
// We say that “rgeat” is a scrambled string of “great”.

// Similarly, if we continue to swap the children of nodes “eat” and “at”, it produces a scrambled string “rgtae”.

//     rgtae
//    /    \
//   rg    tae
//  / \    /  \
// r   g  ta  e
//        / \
//       t   a
// We say that “rgtae” is a scrambled string of “great”.



// Given two strings A and B of the same length, determine if B is a scrambled string of S.



// Input Format:

// The first argument of input contains a string A.
// The second argument of input contains a string B.
// Output Format:

// Return an integer, 0 or 1:
//     => 0 : False
//     => 1 : True


int Solution::isScramble(const string A, const string B) {
     int length1 = A.length();
    //int length2 = B.length();
    
    if(length1 != B.length())
    return false;
    if(A == B)
    return true;
    
    bool scrambled[length1][length1][length1];  
    for (int i=0; i < length1; ++i)
    {  
     for (int j=0; j < length1; ++j)
     {  
       scrambled[i][j][0] = (A[i] == B[j]);  
     }  
   }  
   
   for (int k=1; k < length1; ++k) 
   {
     for (int i=0; i < length1 - k; ++i) 
     { 
       for (int j=0; j < length1 - k; ++j) 
       {  
         scrambled[i][j][k] = false;  
         for (int p=0; p < k; ++p)
         { 
           if ((scrambled[i][j][p] && scrambled[i+p+1][j+p+1][k-p-1])  
               || (scrambled[i][j+k-p][p] && scrambled[i+p+1][j][k-p-1])) {  
             scrambled[i][j][k] = true;  
             break;  
           }  
         }  
       }  
     }  
   }  
   
   return scrambled[0][0][length1-1];  
}
