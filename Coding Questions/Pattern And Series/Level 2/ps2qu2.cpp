#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,r,c,nspace=0,k;
    cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        for(k=0;k<=nspace;k++)
        {
            cout<<" ";
        }
        if(i==1|| i==r)
        {
            for(j=1;j<=c;j++)
            {
                    cout<<"*";
            }
        }
        else
        {
            for(j=1;j<=c;j++)
            {
                    if(j==1 || j==c)
                    {
                        cout<<"*";
                    }
                    else
                        cout<<" ";

            }
        }
        nspace++;
        cout<<endl;
    }
}
