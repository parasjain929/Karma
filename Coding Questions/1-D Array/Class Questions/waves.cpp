/*waves in an array*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i+=2)
    {
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
