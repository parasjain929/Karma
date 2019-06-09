#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum,k,f=0;
    cin>>n;
    int a[n];
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    i=0;j=n-1;
    while(i<j)
    {
        sum=a[i]+a[j];
        if(sum>k)
            j--;
        else if(sum<k)
            i++;
        else if(sum==k)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"YES";
    else
        cout<<"NO";


}
