vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    int i,j;
    vector<vector<int>> res;
    unordered_map<string,vector<int>> m;
    for(i=0;i<A.size();i++){
        string temp=A[i];
        sort(temp.begin(),temp.end());
        m[temp].push_back(i+1);
    }
    auto it = m.begin();
    while(it!=m.end()){
        res.push_back(it->second);
        it++;
    }
    return res;
    
}
