#include<bits/stdc++.h>
using namespace std;
int subset(int a[],int sum, int n)
{
    if(sum==0)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    subset(a,sum-a[n],n-1);
    subset(a,sum-a[n],n-1);
}
int main()
{
        int a[10],sum,n;
        cin>>n>>sum;
        int i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<subset(a,sum,n);
}
