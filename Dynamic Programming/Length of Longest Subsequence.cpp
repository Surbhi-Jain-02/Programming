int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n=A.size();
    int i,j;
    int lis[n];
    int lds[n];
    for(i=0;i<n;i++){
        lis[i]=1;
        lds[i]=1;
    }
    int res=0;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(A[i]>A[j] && lis[j]+1>lis[i])
                lis[i]=lis[j]+1;
        }
    }
    for(i=n-2;i>=0;i--){
        for(j=n-1;j>i;j--){
            if(A[i]>A[j]&& lds[j]+1>lds[i])
                lds[i]=lds[j]+1;
        }
    }
    for(i=0;i<n;i++){
        res = max(res,lds[i]+lis[i]-1);
    }
    return res;
}
