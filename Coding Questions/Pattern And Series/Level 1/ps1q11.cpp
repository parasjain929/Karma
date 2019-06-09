#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    float x,sum,t;
    cin>>x;
    x=x*3.14/180;
    t=x;
    sum=x;
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
     }
    cout<<sum;
}
