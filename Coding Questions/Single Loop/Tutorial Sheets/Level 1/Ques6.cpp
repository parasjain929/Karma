#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,n,a,maxi=INT_MIN;
    cin>>n;
    a=1;
    while(a<=n)
    {

        if(a>maxi)
        {
            maxi=i;
        }
        i++;
        a=i*i;
    }
     cout<<maxi;


    }
