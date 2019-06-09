/* Print Missing element in an Array */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,t;
    cin>>t;
    while(t)
    {

        cin>>n;
        int a[n]={};
        int temp=(n*(n+1))/2;
        for(i=1;i<=n-1;i++)
        {
            cin>>a[i];
            temp-=a[i];
        }
        cout<<temp;

        }
        t--;
    }

