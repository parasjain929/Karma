#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    float x,sum,t;
    cin>>x;
    t=1;
    sum=t;
    for(i=1;i<=n;i++)
    {
        t=(t*x)/(i);
        sum+=t;
     }
    cout<<sum;
}
