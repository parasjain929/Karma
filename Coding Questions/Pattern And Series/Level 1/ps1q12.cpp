#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2,b=10,i,sum=a+b,n;
    cin>>n;
    for(i=3;i<=2*n;i++)
    {
        if(i%2==0)
        {
                b*=2;
                sum+=b;
        }
        else
        {
                a*=3;
                sum+=a;
        }
     }
     cout<<sum;


    }
