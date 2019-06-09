#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,max1=INT_MIN,temp;
    cin>>r>>c;
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<c;i++) //col Max
    {
        max1=a[0][i];
        for(j=1;j<r;j++)
        {
                if(a[j][i]>max1)
                    max1=a[j][i];
        }
        cout<<max1<<" ";
    }
    cout<<endl;
     for(i=0;i<r;i++) //row MAx
    {
        max1=a[i][0];
        for(j=1;j<c;j++)
        {
                if(a[i][j]>max1)
                    max1=a[i][j];
        }
        cout<<max1<<" ";
    }

}
