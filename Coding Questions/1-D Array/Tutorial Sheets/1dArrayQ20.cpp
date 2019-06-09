#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,n,k;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        a[k]=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                cout<<a[i]<<" ";
            }
        }
    }
