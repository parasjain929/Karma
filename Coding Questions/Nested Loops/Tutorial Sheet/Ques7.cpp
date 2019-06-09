#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            cout<<a[i] ;
        }
    }
}
