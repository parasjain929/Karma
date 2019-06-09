#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j,n,a[10]={};
    cin>>n;
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i;j>=1;j--)
        {
            cout<<a[j];
        }
}
