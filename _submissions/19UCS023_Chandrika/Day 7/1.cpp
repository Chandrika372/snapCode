int Solution::solve(int A, vector<int> &B) {
    if(A<3)
    {
        return 0;
    }
    int ans=0;
    int sum=0;
    for(int i=0;i<A;i++)
    {
        sum+=B[i];
    }
    if(sum%3!=0)
    {
        return 0;
    }
    else if(sum%3==0)
    {
    int currSum=0;
    vector<int>a(A);
    vector<int>b(A);
    for(int i=0;i<A;i++)
    {
        b[i]=sum-currSum;
        currSum+=B[i];
        a[i]=currSum;
    }
    const int sum1=sum/3;
    for(int i=0;i<A;i++)
    {
        if(a[i]==sum1)
        {
            for(int j=i+2;j<A;j++)
            {
                if(b[j]==sum1)
                ans++;
            }
        }
    }
    }
    return ans;
    
    
}
