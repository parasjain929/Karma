#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,b;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=1,j=0;
    b=a[j];
    while(i<=n)
    {

        if(b<a[i])
        {
            i++;
        }
         if(i==n-1)
        {
            cout<<"("<<j<<","<<i-1<<")";
             break;
        }
        else
        {
            cout<<"("<<j<<","<<i-1<<")";
            j=i;
            b=a[j];
            i++;
        }
    }
}
