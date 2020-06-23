Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

// NOTE A solution will always exist. read Goldbach’s conjecture

// Example:


// Input : 4
// Output: 2 + 2 = 4

// If there are more than one solutions possible, return the lexicographically smaller solution.

// If [a, b] is one solution with a <= b,
// and [c,d] is another solution with c <= d, then

// [a, b] < [c, d] 

// If a < c OR a==c AND b < d. 

void seive(int n,vector<bool> &prime){
    prime[0]=false;
    prime[1]=false;
    int i,j;
    for(i=2;i<=n;i++)
        prime[i]=true;
    for(i=2;i*i<=n;i++){
        if(prime[i]){
            for(j=i*i;j<=n;j=j+i){
                prime[j]=false;
            }
        }
    }
}



vector<int> Solution::primesum(int A) {
    vector<bool> prime(A+1);
    seive(A,prime);
    vector<int> res(2);
    int i;
    for(i=0;i<A;i++){
        if(prime[i]&&prime[A-i]){
            res[0]=i;
            res[1]=A-i;
            return res;
        }
    }
    return res;
}
