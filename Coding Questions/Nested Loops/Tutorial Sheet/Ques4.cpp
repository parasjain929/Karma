#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=1,max=INT_MIN,f;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>f;
    sort(a,a+n);
    for(i=1;i<=n;i++)
    {
        if(a[i]==a[i-1])
        {
            c++;
        }
        else
        {
                if(c==f)
                {
                    cout<<a[i-1]<<endl;
                }
                c=1;
        }
    }

}
