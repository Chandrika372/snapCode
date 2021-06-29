string Solution::convertToTitle(int A) {
    string ans="";
    char alph[]={'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
    while(A)
    {
        int rem=A%26;
        ans.push_back(alph[rem]);
        if(alph[rem]=='Z')
        {
         A--;
        }
        A/=26;
    }
        reverse(ans.begin(),ans.end());
        return ans;
    
}
