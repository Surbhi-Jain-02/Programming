
// Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

// If there is no solution possible, return -1.

// Example :

// A : [3 5 4 2]

// Output : 2 
// for the pair (3, 4)


int Solution::maximumGap(const vector<int> &A) {
    int minL[A.size()];
    int maxR[A.size()];
    int i=0,j=0,res=-1;
    minL[0]=A[0];
    maxR[A.size()-1]=A[A.size()-1];
    for(i=1;i<A.size();i++){
        minL[i]=min(minL[i-1],A[i]);
    }
    for(i=A.size()-2;i>=0;i--){
        maxR[i]=max(maxR[i+1],A[i]);
    }
    int n=A.size();
    i=0;
    while(j<n && i<n){
        if(maxR[j]>=minL[i]){
            
            res = max(res,(j-i));
            j++;
        }
        else
            i++;
    }
    return res;
    
}
