#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,sum=0,max1=INT_MIN,temp;
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
                sum+=a[i][j];
        }
        if(sum>max1)
        {
            max1=sum;
            temp=i+1;
        }
        sum=0;
    }
    cout<<temp;
}
