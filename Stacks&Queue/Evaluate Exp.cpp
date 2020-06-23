// Evaluate the value of an arithmetic expression in Reverse Polish Notation.

// Valid operators are +, -, *, /. Each operand may be an integer or another expression.



// Input Format

// The only argument given is character array A.
// Output Format

// Return the value of arithmetic expression formed using reverse Polish Notation.
// For Example

// Input 1:
//     A =   ["2", "1", "+", "3", "*"]
// Output 1:
//     9
// Explaination 1:
//     starting from backside:
//     *: ( )*( )
//     3: ()*(3)
//     +: ( () + () )*(3)
//     1: ( () + (1) )*(3)
//     2: ( (2) + (1) )*(3)
//     ((2)+(1))*(3) = 9
    
// Input 2:
//     A = ["4", "13", "5", "/", "+"]
// Output 2:
//     6
int Solution::evalRPN(vector<string> &A) {
    stack<int> s;
    int i;
    for(i=0;i<A.size();i++){
        if(A[i]=="+"||A[i]=="-"||A[i]=="*"||A[i]=="/"){
            int B = s.top();
            s.pop();
            int A = s.top();
            s.pop();
            int res;
            if(A[i]=="+"){
                res = A+B;
            }
            else if(A[i]=="/"){
                res = A/B;
            }
            else if(A[i]=="*"){
                res = A*B;
            }
            else
                res = A-B;
            s.push(res);
        }
        else{
            s.push(stoi(A[i]));
        }
    }
    return s.top();
}
