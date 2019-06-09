#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,lsum=0,rsum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    lsum=a[0];
    for(j=2;j<=n-1;j++)
    {
        rsum+=a[j];
    }
    if(lsum==rsum)
        {
            cout<<a[1];
        }
    for(i=2;i<=n-2;i++)
    {
        lsum+=a[i-1];
        rsum-=a[i];
        if(lsum==rsum)
        {
            cout<<a[i]<<" "<<i;
            break;
        }
    }
}
