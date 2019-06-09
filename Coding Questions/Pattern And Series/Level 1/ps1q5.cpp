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
            cout<<temp<<" ";
            temp--;
        }
        cout<<endl;
        temp+=2*i+1;
    }
    return 0;
}
