#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,sum=0,max1=INT_MIN,temp,min1=INT_MAX,temp2;
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
            sum=sum+(a[i][j]*pow(2,c-i-1));
        }
        if(sum>max1)
            {
                max1=sum;
                temp=i+1;
            }
        if(sum<min1)
            {
                min1=sum;
                temp2=i+1;
            }
            sum=0;
        }
        cout<<temp<<" "<<temp2;
        }
