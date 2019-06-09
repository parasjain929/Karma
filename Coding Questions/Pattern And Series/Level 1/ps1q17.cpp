#include<bits/stdc++.h>
using namespace std;
int main()
{
    float t1,t2,i,t3,n,d,tn;
    float sn;
    cin>>t1>>t2>>t3;
    cin>>n;
    d=t3-t2;
    tn=t1+(n-1)*d;
    sn=((n/2)*((2*t1)+(n-1)*d));
    cout<<sn<<" "<<tn;


    }
