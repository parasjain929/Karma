#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,n,temp,j=0;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                if(i!=j)
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;

                }
                j++;
            }


        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }}

