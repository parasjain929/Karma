#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(temp%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            temp++;
        }
            cout<<endl;
            }
    }
