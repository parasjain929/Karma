#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,toprint=1,nspace;
    cin>>n;
    nspace=(n/2+1)-1;
    for(i=1;i<=(n/2)+1;i++)
    {
        for(k=1;k<=nspace;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=toprint;j++)
        {
                cout<<"*";
        }
        cout<<endl;
        toprint+=2;
        nspace--;
    }
        toprint-=4;
        nspace+=2;
    for(i=(n/2)+2;i<=n;i++)
    {
        for(k=1;k<=nspace;k++)
        {
            cout<<" ";
        }
        for(j=toprint;j>=1;j--)
        {
                cout<<"*";
        }
        cout<<endl;
        toprint-=2;
        nspace++;
    }
}
