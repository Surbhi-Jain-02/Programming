// Determine whether an integer is a palindrome. Do this without extra space.

// A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
// Negative numbers are not palindromic.

// Example :

// Input : 12121
// Output : True

// Input : 123
// Output : False
int Solution::isPalindrome(int A) {
    int i,count=0;
    int n = A;
    int res=0;
    if(A<0)
        return 0;
    while(A!=0){
        int x = A%10;
        res = res*10 + x;
        A=A/10;
    }
    if(res==n)
        return 1;
    else
        return 0;
}
