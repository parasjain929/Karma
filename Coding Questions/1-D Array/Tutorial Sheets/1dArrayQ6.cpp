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
        cin>>b[i];
    }
for (i=0;i<n;i++)
    {
        int j;
        for (j=0;j<n;j++)
            if (a[i]==b[j])
                break;

        if (j==n)
            cout<<a[i]<<" ";
    }
    }
