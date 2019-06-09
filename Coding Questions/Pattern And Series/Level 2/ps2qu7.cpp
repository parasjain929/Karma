#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,temp=1,nspace;
    cin>>n;
    nspace=n-1;
    for(i=1;i<=n;i++)
    {

        if(i==1|| i==n)
        {
            for(j=1;j<=n;j++)
            {
                    cout<<j;
            }
        }
        else
        {
            for(k=1;k<=nspace;k++)
            {
                cout<<" ";
            }
            cout<<nspace+1;
        }
        nspace--;
        cout<<endl;
    }
}
