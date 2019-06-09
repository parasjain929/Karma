#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,k;
    cin>>r>>c;
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>k;
    if(k<=r)
    {
        i=r-k;
        j=0;
        while(i<r)
        {
            cout<<a[i][j]<<endl;
            i++;
            j++;
        }
    }
    else
    {
        j=k-c+1;
        i=0;
        while(j<c)
        {
            cout<<a[i][j]<<endl;
            i++;
            j++;
        }
    }
}
