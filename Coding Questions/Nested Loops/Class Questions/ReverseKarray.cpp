#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int ,int);
int main()
{
        int n,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        //i=1;
        //int k2=k;
        /*while(k<=n-1)
        {
            if(k>n-1)
            {
                k=n-1;
            }
            reverse(a,i-1,k-1);
            i=i+k2;
            k+=k2;

        }*/
        int i = 0;
        int j = k;
       // cout<<"i "<<i<<"j "<<n-1<<endl;
        while(j < n-1)
        {
            if(j > n-1 )
            {
                j = n-1;
            }
            reverse(a,i,j-1);
            i = j;
            j = j+k;
            //cout<<"i "<<i<<"j "<<j<<endl;
        }
        //cout<<"i "<<i<<endl;
        reverse(a,i,n-1);
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
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
