#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,temp,diff;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    sort(a,a+n);
    diff=a[m-1]-a[0];
    temp=diff;
    for(i=1;i<n;i++)
    {
        diff=a[m+i-1]-a[i];
        if(temp>diff)
        {
            temp=diff;
        }
    }
    cout<<temp;
}
