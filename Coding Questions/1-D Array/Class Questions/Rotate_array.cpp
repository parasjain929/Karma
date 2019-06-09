/*Rotate the array by D times*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n,d,i,j,temp;
     cin>>d;
     cin>>n;
     int a[n];
     for(i=0;i<=n-1;i++)
     {
         cin>>a[i];
     }
     for(j=1;j<=d;j++)
     {
        temp=a[0];
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];

        }
        a[n-1]=temp;
     }
     for(i=0;i<=n-1;i++)
     {
         cout<<a[i]<<" ";
     }

}
