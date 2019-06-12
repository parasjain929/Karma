#include<bits/stdc++.h>
using namespace std;
int maxarray(int a[],int strt, int end,int max)
{
    if(strt>end)
        return max;

    if(a[strt]>max)
        max=a[strt];

    maxarray(a,strt+1,end,max);
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int n2=maxarray(a,0,n-1,0);
    cout<<n2;
    }
