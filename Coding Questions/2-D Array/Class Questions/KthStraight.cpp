#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,srow,scol;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>k;
    if(k<n)
    {
        srow=k;
        scol=0;
    }
    else
    {
        scol=k-n+1;
        srow=n-1;
    }
    for( ;srow<n && scol<n;srow--,scol++)
    {
        cout<<a[srow][scol]<<" ";
    }
}
