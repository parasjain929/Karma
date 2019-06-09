#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,f=1,a,sum=0;
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        f=1;
        for(i=a;i>=1;i--)
        {
            f=f*i;
        }
        cout<<f;
        sum=sum+f;
        n=n/10;
    }
    cout<<sum;
}
