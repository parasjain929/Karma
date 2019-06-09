#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j;
    cin>>r>>c;
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1;i<r-1;i++)
    {
        for(j=1;j<c-1;j++)
        {
            if(a[i][j]>a[i-1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1])
            {
                    cout<<a[i][j]<<endl;
            }
        }
    }
}
