/*Maximum Sum Contiguous SubArray*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,gmax=INT_MIN,lmax=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        lmax+=a[i];
        if(gmax<lmax)
        {
            gmax=lmax;
        }
        if(lmax<0)
        {
            lmax=0;
        }
    }
    cout<<gmax;

}
