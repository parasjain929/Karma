#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j=1,k=1,m,n,l;
    cin>>n>>m>>l;
    int a[n],b[m],c[l];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=l;i++)
    {
        cin>>c[i];
    }
    i=j=k=1;
    while(i<=n && j<=m && k<=l)
    {
        if(a[i]==b[j] && b[j]==c[k])
        {
            cout<<a[i];
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
             i++;

        else if (b[j] < c[k])
             j++;

        else
             k++;
    }
}
