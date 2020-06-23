// words, find a subsequence of array in which the subsequence’s elements are in strictly increasing order, and in which the subsequence is as long as possible.
// This subsequence is not necessarily contiguous, or unique.
// In this case, we only care about the length of the longest increasing subsequence.


// Input Format:

// The first and the only argument is an integer array A.
// Output Format:

// Return an integer representing the length of the longest increasing subsequence.
// Constraints:

// 1 <= length(A) <= 2500
// 1 <= A[i] <= 2000
// Example :

// Input 1:
//     A = [1, 2, 1, 5]

// Output 1:
//     3
class Solution {
    public:
        int lis(const vector<int> &V) {
            if (V.size() == 0) return 0;
            int longest[V.size() + 1];
            int maxLen = 1;
            memset(longest, 0, sizeof(longest));
            // longest[i] denotes the maximum length of increasing subsequence that ends 
            // with V[i].
            longest[0] = 1;
            for (int i = 1; i < V.size(); i++) {
                longest[i] = 1;
                // V[i] can only come after any V[j] such that V[j] < V[i].
                // We try appending V[i] after every such subsequence and update our 
                // longest[i]. 
                for (int j = 0; j < i; j++) {
                    if (V[j] < V[i]) longest[i] = max(longest[i], longest[j] + 1);
                }
                maxLen = max(maxLen, longest[i]);
            }
            return maxLen;
        }
};
