#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,limit;
    cin>>n;
    limit=sqrt(n);
    for(i=1;i<=limit;i++)
    {
        if(n%i==0)
        {
               cout<<"("<<i<<','<<n/i<<')';
        }

     }


    }
