#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,n,max=INT_MIN,sr;
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
        for(i=0;i<n;i++)
        {
            sr=(a[i]/b[i])*100;
            if(sr>max)
                max=sr;
        }
        cout<<max;
}
