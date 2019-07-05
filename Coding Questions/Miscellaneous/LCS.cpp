#include<bits/stdc++.h>
using namespace std;
int LCS(char *a, char *b,int m , int n)
{
    if(m==0||n==0)
        return 0;
    if(a[m-1]==b[n-1])
       return  LCS(a,b,m-1,n-1)+1;
    else
       return max(LCS(a,b,m-1,n),LCS(a,b,m,n-1));
}
int main()
{
    char a[]="AGGTAB";
    char b[]="GXTXAYB";

    int m=strlen(a);
    int n=strlen(b);

    cout<<LCS(a,b,m,n);
}
