#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=1,max=INT_MIN,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1;i<=n;i++)
    {
        if(a[i]==a[i-1])
        {
            c++;
        }
        else
        {
                cout<<a[i-1]<<":"<<c<<endl;
                if(c>max)
                {
                    max=c;
                    temp=i-1;
                }
                c=1;
        }
    }
    cout<<a[temp];
}
