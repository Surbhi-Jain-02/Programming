// Given an array of real numbers greater than zero in form of strings.
// Find if there exists a triplet (a,b,c) such that 1 < a+b+c < 2 .
// Return 1 for true or 0 for false.

// Example:

// Given [0.6, 0.7, 0.8, 1.2, 0.4] ,

// You should return 1

// as

// 0.6+0.7+0.4=1.7

// 1<1.7<2

// Hence, the output is 1.

int Solution::solve(vector<string> &A) {
    vector<double> v;
    int n=A.size();
    for (int i = 0; i < n; i++) {
        v.push_back(stof(A[i]));
    }
    double a,b,c;
    a=v[0];
    b=v[1];
    c=v[2];
    double m; 
    for(int i=3;i<=n;i++){
        double sum = a+b+c;
        if(sum>1 && sum<2)
            return 1;
        if(i>=n)
            break;
        double x = v[i];
        if(sum>2){
            m = max(a,max(b,c));
            if(m==a)
                a = x;
            else if(m==b)
                b = x;
            else if(m==c)
                c=x;
        }
        else if(sum<=1){
            m=min(a,min(b,c));
             if(m==a)
                a = x;
            else if(m==b)
                b = x;
            else if(m==c)
                c=x;
        }
    }
    return 0;
}
