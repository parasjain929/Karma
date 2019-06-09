#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,max1=INT_MIN,temp,count=0;
    cin>>r>>c;
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                    if(a[i][j-1]==a[i][j])
                    {
                        count++;
                    }
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
