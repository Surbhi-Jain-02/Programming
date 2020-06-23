string Solution::minWindow(string A, string B) {
    int len1=A.length();
    int len2 = B.length();
    int str[256]={0};
    int pat[256]={0};
    int start=0;
    int count=0;
    int start_index =1;
    int res =INT_MAX;
    if(len1< len2)
        return "";
    for(int i=0;i<len2;i++){
        pat[B[i]]++;
    }
    for(int j=0;j<len1;j++){
        str[A[j]]++;
        if(str[A[j]]<=pat[A[j]])
            count++;
        if(count==len2){
            while(str[A[start]]>pat[A[start]]|| pat[A[start]]==0){
                if(str[A[start]]>pat[A[start]])
                    str[A[start]]--;
                start++;
            }
            int min_len = j-start+1;
            if(min_len<res){
                res = min_len;
                start_index = start;
            }
        }
    }
    string str1= "";
    if(start_index ==0)
        return str1;
   
    else if(res == 1)
        return A[0];
    return A.substr(start_index,res);
}
