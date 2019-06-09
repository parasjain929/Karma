#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,a[10],max1,max2,max3;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    max1=a[1];
    max2=a[2];
    max3=a[3];
    for(i=4;i<=n;i++)
    {
        if(a[i]>max3)
        {
            max1=max2;
            max2=max3;
            max3=a[i];
        }
    }
    cout<<max1<<max2<<max3;
}

