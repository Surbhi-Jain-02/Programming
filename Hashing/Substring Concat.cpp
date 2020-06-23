vector<int> Solution::findSubstring(string A, const vector<string> &B) {
     int noOfWords = B.size();
    vector<int> res;
    if (A.size() == 0 || B.size() == 0){
        return res;
    }
    
    int wordSize = B[0].size();
    unordered_map<string, int> hash;
    
    for (const auto& b : B)
        ++hash[b];
    
    auto i = 0;
    while ((i + wordSize*noOfWords - 1) < A.size()) {
        unordered_map<string, int> tempHash;
        auto j = 0;
        while (j < A.size()) {
            string word = A.substr(i + j*wordSize, wordSize);
            if (hash.find(word) == hash.end()) {
                break;
            } else {
                if (++tempHash[word] > hash[word]){
                    break;
                }
                ++j;
            }
            
            if (j == noOfWords)
                res.emplace_back(i);
        }
        ++i;
    }
    
    return res;
}
