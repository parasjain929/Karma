#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,flag=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n-2;i++)
    {
        flag=0;
        for(j=0;j<i-1;j++)
        {
            if(a[i]<a[j])
            {
                flag=1;
                break;
            }
        }
        for(j=i+1;j<n-1;j++)
        {
            if(a[i]>a[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            cout<<a[i];
            break;
        }
}
if(flag)
    cout<<"no such element";
    }
