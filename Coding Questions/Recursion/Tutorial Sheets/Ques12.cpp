#include<bits/stdc++.h>
using namespace std;
int arraysum(int a[],int strt, int end)
{
    if(strt<end)
    {
        return a[strt]+arraysum(a,strt+1,end);
    }
    else
        return 0;
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
    cout<<arraysum(a,0,n);
    }
