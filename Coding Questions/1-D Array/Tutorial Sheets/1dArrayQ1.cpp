#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,k,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        for(i=0;i<n;i++)
        {
            if(a[i]==k)
                {
                    cout<<i;
                    break;
                }
        }
}
