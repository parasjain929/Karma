#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int ,int);
int main()
{
        int i,n,k;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
   for(i=0;i<n;i+=k)
   {
        if(i+k-1<n-1)
        {
            reverse(a,i,i+k-1);
        }
        else
        {
            reverse(a,i,n-1);
        }
    }
    for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
}
void reverse(int a[],int st,int en)
{
    int temp;
    while(st<en)
    {
        temp=a[en];
        a[en]=a[st];
        a[st]=temp;
        st++;
        en--;
    }
}
