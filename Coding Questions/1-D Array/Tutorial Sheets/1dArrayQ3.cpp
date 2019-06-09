#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,k,n,sum=0,avg=0,c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
                {
                    c++;
                }
        }
        cout<<c;
}
