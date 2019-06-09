#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,k,n,r1,r2,c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>r1>>r2;
        for(i=0;i<n;i++)
        {
            if(a[i]>=r1 && a[i]<=r2)
                {
                    c++;

                }
        }
        cout<<c;
}
