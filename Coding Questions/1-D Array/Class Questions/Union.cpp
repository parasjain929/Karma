/*Union 2 sorted array's*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j=1,k=1,m,n,temp=0;
    cin>>n>>m;
    int a[n+1],b[m+1],c[m+n+1];
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

            if(a[i]<b[j])
            {
               if(a[i]!=temp)
               {
                    c[k]=a[i];
                    i++;
                    temp=c[k];
                    k++;

                }
                else
                    i++;
            }
            else
            {
                if(b[j]!=temp)
                {
                    c[k]=b[j];
                    j++;
                    temp=c[k];
                    k++;

                }
                else
                    j++;
            }

    }
    while(i<=n)
    {
        if(a[i]!=temp)
        {
            c[k]=a[i];
            i++;
            temp=c[k];
            k++;
        }
        else
            i++;
    }
    while(j<=m)
    {
        if(b[j]!=temp)
        {
            c[k]=b[j];
            j++;
            temp=c[k];
            k++;
        }
        else
            j++;
    }
    for(i=1;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}
