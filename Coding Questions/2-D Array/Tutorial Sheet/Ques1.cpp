#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,r,c;
    cin>>r>>c;
    int a[r][c],b[r][c]={};
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];

        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
                    b[i][j]=a[j][i];
        }
    }
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {

            cout<<b[i][j]<<" "
            ;
        }
        cout<<endl;
    }

    }
