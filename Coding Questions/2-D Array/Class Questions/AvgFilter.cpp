#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,temp,n,x,y;
    cin>>n;
    int a[n][n];
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }

    for(i=1;i<n-1;i++)
    {
    	temp=0;
        for(j=1;j<n-1;j++)
        {
            for(x=-1;x<=1;x++)
            {
                for(y=-1;y<=1;y++)
                {
                    temp+=a[i+x][j+y];
                }
                    
                }
                a[i][j]=temp/9;
            }
        }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {cout<<a[i][n];
    }
    cout<<endl;}
}
