#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n][n],b[n][n],c[n][n]={};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
        }
    }
    for(i=0;i<n;i++)

    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
}
}
