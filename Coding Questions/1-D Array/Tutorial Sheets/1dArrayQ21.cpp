#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c1=0,n,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            c1++;

    }
    if(c1%2==0) cout<<0;
    else cout<<1;
    }
