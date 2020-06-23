// Find the largest continuous sequence in a array which sums to zero.

// Example:


// Input:  {1 ,2 ,-2 ,4 ,-4}
// Output: {2 ,-2 ,4 ,-4}

vector<int> Solution::lszero(vector<int> &A) {
    unordered_map<int,int> m;
    int sum=0;
    int maxLength = 0;
    int start=0;
    int end=-1;
    for(int i=0;i<A.size();i++){
        sum = sum+A[i];
        if(A[i]==0 && maxLength==0){
            maxLength =1;
            start =i;
            end=i;
        }
        if(sum==0){
            maxLength = i+1;
            start=0;
            end=i;
        }
            
        if(m.find(sum)!=m.end()){
            if(maxLength<(i-m[sum])){
                cout<<m[sum]<<" ";
                start = m[sum];
                end =i;
                maxLength = i-m[sum];
            }
        
        }
        else
            m[i]=sum;
    }
    vector<int> res;
    for(int i=start;i<=end;i++){
        res.push_back(A[i]);
    }
    return res;
}
