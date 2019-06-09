#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,max1,min1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max1=INT_MIN;
    min1=INT_MAX;
    for(i=0;i<n-1;i+=2)
    {
       if(a[i]>a[i+1])
       {
           if(max1<a[i])
                max1=a[i];
           if(min1>a[i+1])
                min1=a[i+1];
       }
       else
       {
           if(max1<a[i+1])
                max1=a[i+1];
           if(min1>a[i])
                min1=a[i];
       }
    }
    if(n%2!=0)
       {
           if(a[n-1]>max1)
                max1=a[n-1];
           else if(a[n-1]<min1)
                    min1=a[n-1];
       }

    cout<<max1<<" "<<min1;
    return 0;
}
