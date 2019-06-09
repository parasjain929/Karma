#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,count=0,max1=INT_MIN,temp;
    cin>>r>>c;
    int a[r][c];
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
            if(a[i][j]==1)
            {
                count++;
            }
        }
        if(count>max1)
        {
            max1=count;
            temp=i+1;
        }
        count=0;
    }
    cout<<temp;
}
