#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    int a[n],b;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        b=a[n-1-i]*(pow(2,i));
        sum+=b;
    }
    cout<<sum;
}
