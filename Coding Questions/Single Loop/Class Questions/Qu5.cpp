#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,limit,j,a,l;
    cin>>n;
    limit=n/2;
    for(i=2;i<=limit;i++)
    {

        while(n%i==0)
        {
            n=n/i;
            cout<<i<<endl;
            break;
        }

        }

    }

