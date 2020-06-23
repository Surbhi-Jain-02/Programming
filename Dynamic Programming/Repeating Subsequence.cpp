int Solution::anytwo(string A) {
    int i,j;
    int l1 = A.length();
    int res[l1+1][l1+1];
    for(i=0;i<=l1;i++){
        for(j=0;j<=l1;j++){
            res[i][j]=0;
        }
    }
    for(i=1;i<=l1;i++){
        for(j=1;j<=l1;j++){
            if(A[i-1]==A[j-1] && i!=j){
                res[i][j]=1+res[i-1][j-1];
                cout<<i<<"--"<<j<<" ";
            }
            else
                res[i][j]=max(res[i-1][j],res[i][j-1]);
        }
    }
    cout<<res[l1][l1];
    if(res[l1][l1]>1)
        return 1;
    else
        0;
}
