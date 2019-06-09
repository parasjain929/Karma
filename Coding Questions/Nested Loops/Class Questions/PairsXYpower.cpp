#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>y[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((pow(x[i],y[j])>(pow(y[j],x[i]))))
            {
                cout<<x[i]<<" "<<y[j];
            }
        }
    }
}
