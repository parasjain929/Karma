#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,n,f=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0,j=n-1;i<j;i++,j--)
        {
            if(a[i]!=a[j])
            {
                f=1;
            }
        }
        if(f==1)
        {
            cout<<"not a Palindrome";
        }
        else
            cout<<"Palindrome";
}
