#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,limit,countp=0;
    cin>>n;
    limit=sqrt(n);
    for(i=2;i<=limit;i++)
    {
        countp=0;
        while(n%i==0)
        {
               countp++;
               n=n/i;
        }
        if(countp)
        {
            cout<<i<<'^'<<countp<<endl;
     }

    }
    }
