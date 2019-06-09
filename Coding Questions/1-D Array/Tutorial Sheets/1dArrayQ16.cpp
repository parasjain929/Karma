#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum1=0,sum2=0;
    cin>>n;
    int a[n],b[n],a1,a2,d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }

    for(i=n-1;i>=0;i--)
    {
        a1=a[n-1-i]*(pow(2,i));
        a2=b[n-1-i]*(pow(2,i));
        sum1+=a1;
        sum2+=a2;
    }
    cout<<sum1<<" "<<sum2<<" ";
    d=sum1+(~sum2 +1);
    cout<<d;
}
