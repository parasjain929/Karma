#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c1=0,c2=0,n,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            c1++;
        else
            c2++;
    }
    temp=(c1<c2)?c1:c2;
    for(i=0;i<n;i++)
    {
        if(temp>0)
        {
            if(i%2==0)
            {
                a[i]=0;
            }
            else
            {
                a[i]=1;
                temp--;
            }
        }
        else if(c2>c1) a[i]=0;
    else a[i]=1;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

}    }
