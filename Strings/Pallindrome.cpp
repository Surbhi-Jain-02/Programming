// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// Example:

// "A man, a plan, a canal: Panama" is a palindrome.

// "race a car" is not a palindrome.

// Return 0 / 1 ( 0 for false, 1 for true ) for this problem

int Solution::isPalindrome(string A) {
    int l = A.length();
    int s =0;
    int e = l-1;
    while(s<=e){
        //cout<<s<<" "<<e<<endl;
        if(isalnum(A[s]) && isalnum(A[e])){
            if(tolower(A[s])!=tolower(A[e]))
                return 0;
        }
        if(isalnum(A[s]) && !isalnum(A[e])){
            e--;
        }
        else if(!isalnum(A[s]) && isalnum(A[e])){
            s++;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
