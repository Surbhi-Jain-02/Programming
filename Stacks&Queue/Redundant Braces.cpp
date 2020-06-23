// Given a string A denoting an expression. It contains the following operators ’+’, ‘-‘, ‘*’, ‘/’.

// Chech whether A has redundant braces or not.

// Return 1 if A has redundant braces, else return 0.

// Note: A will be always a valid expression.



// Input Format

// The only argument given is string A.
// Output Format

// Return 1 if string has redundant braces, else return 0.
// For Example

// Input 1:
//     A = "((a + b))"
// Output 1:
//     1
//     Explanation 1:
//         ((a + b)) has redundant braces so answer will be 1.
int Solution::braces(string A) {
    stack<char> s;
    int i;
    for(i=0;i<A.size();i++){
        if(A[i]==')'){
            char top = s.top();
            s.pop();
            bool flag = true;
            while(top!='('){
                if(top=='+'||top=='-'||top=='*'||top=='/')
                    flag = false;
                top = s.top();
                s.pop();
            }
            if(flag == true)
                return 1;
        }
        else
            s.push(A[i]);
    }
    return 0;
}
