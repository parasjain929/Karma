#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,n;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            b[n-1-i]=a[i];

        }
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
}
