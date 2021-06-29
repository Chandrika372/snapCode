int Solution::solve(vector<int> &A, int B) {
    int numofPairs=0;
    unordered_set<int>s;
    for(int i=0;i<A.size();i++)
    {
        if(s.find(B^A[i])!=s.end())
        numofPairs++;
        s.insert(A[i]);
    }
    return numofPairs;

}
