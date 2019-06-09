/*Intersection sorted array's*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j=1,k=1,m,n;
    cin>>n>>m;
    int a[n],b[m],c[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    i=j=1;
    while(i<=n && j<=m)
    {
        if(a[i]==b[j])
        {
            c[k]=a[i];
            i++;
            j++;
            k++;
        }
        else if(j==m)
        {
            j=1;
            i++;
        }
        else
            j++;
    }

    for(i=1;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}
