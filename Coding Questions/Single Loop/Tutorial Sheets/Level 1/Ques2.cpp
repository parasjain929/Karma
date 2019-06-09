#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,f=1,a,sum=0;
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout<<sum;
}
