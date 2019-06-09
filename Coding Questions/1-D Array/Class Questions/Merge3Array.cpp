/*Merge 3 sorted array's*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j=1,k=1,m,n,l,l1=1,min1;
    cin>>n>>m>>l;
    int a[n],b[m],c[l],d[m+n+l];
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
    i=j=1;
    while(i<=n && j<=m && k<=l)
    {
        min1=min(min(a[i],b[j]),c[k]);
        d[l1]=min1;
        l1++;
        if (min1 == a[i])
            i++;
        else if (min1 == b[j])
            j++;
        else
            k++;
    }
        while(i<=n && j<=m)
        {
            if(a[i]<b[j])
            {
                d[l1]=a[i];
                i++;
                l1++;
            }
        else
        {
            d[l1]=b[j];
            j++;
            l1++;
        }
    }
       while(i<=n && k<=l)
        {
            if(a[i]<c[k])
            {
                d[l1]=a[i];
                i++;
                l1++;
        }
        else
        {
            d[l1]=c[k];
            k++;
            l1++;
        }
    }
       while(k<=l && j<=m)
        {
            if(c[k]<b[j])
            {
                d[l1]=c[k];
                k++;
                l1++;
        }
        else
        {
            d[l1]=b[j];
            j++;
            l1++;
        }
    }
    while(i<=n)
    {
        d[l1]=a[i];
        i++;l1++;
    }
    while(j<=m)
    {
        d[l1]=b[j];
        j++;l1++;
    }
    while(k<=l)
    {
        d[l1]=c[k];
        l1++;k++;
    }
    for(i=1;i<l1;i++)
    {
        cout<<d[i]<<" ";
    }
}


