<!-- You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point. 
Input : [(0, 0), (1, 1), (1, 2)]
Output : 2
-->

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int i;
    int result=0;
    for(i=0;i<A.size()-1;i++){
        int distx = abs(A[i+1]-A[i]);
        int disty = abs(B[i+1]-B[i]);
        result = result + max(distx,disty);
    }
    return result;
}
