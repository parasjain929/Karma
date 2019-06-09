#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,a[10],ma;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ma=a[n];
    cout<<ma;
      for(i=n;i>=1;i--)
    {
        if(a[i]>ma && a[i]>=a[i+1])
        {
            ma=a[i];
            cout<<ma;

        }
    }
}

