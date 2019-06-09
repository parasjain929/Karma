#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j,n,maxi=INT_MIN;
    while(1)
    {
        cin>>n;
        if(n<=0)
            break;
        else
        {
            if(n>maxi)
            maxi=n;
        }
    }
    cout<<maxi;
}
