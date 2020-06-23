// Given the array of strings A,
// you need to find the longest string S which is the prefix of ALL the strings in the array.

// Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
// and S2.

// For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".



// Input Format

// The only argument given is an array of strings A.
// Output Format

// Return longest common prefix of all strings in A.
int getMinLength(vector<string> A){
    int min=INT_MAX;
    int i;
    for(i=0;i<A.size();i++){
        if(A[i].length()<min)
            min = A[i].length();
    }
    return min;
}

bool isSubString(vector<string> A,int n,string str,int start,int end){
    int i,j;
    for(i=0;i<n;i++){
        for(j=start;j<=end;j++){
            if(A[i][j]!=str[j])
                return false;
        }
    }
    return true;
}
string Solution::longestCommonPrefix(vector<string> &A) {
    int len = A.size();
    int minLen = getMinLength(A);
    int low = 0;
    int high = minLen-1;
    string result = "";
    while(low<=high){
        int mid = low+(high-low)/2;
        if(isSubString(A,len,A[0],low,mid)){
            result = result + A[0].substr(low,mid-low+1);
            low=mid+1;
        }
        else
            high = mid-1;
    }
    return result;
}
