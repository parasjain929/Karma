#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,nspace=0,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=0;k<=nspace;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=n;j++)
        {
                cout<<"*"<<" ";
        }
        nspace++;
        cout<<endl;
    }
}
