// Given a list of non negative integers, arrange them such that they form the largest number.

// For example:

// Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

// Note: The result may be very large, so you need to return a string instead of an integer.

int compare(string x,string y){
    string xy = x.append(y);
    string yx = y.append(x);
    return xy.compare(yx) > 0 ? 1:0;
}


string Solution::largestNumber(const vector<int> &A) {
    vector<string> v;
    int i;
   
    for(i=0;i<A.size();i++){
        v.push_back(to_string(A[i]));
    }
    sort(v.begin(),v.end(),compare);
    
    string res="";
    for(i=0;i<v.size();i++){
        res.append(v[i]);
    }
    i=0;
    while(res[i]=='0')
        i++;
    if(i==res.length())
        return "0";
    return res;
}
