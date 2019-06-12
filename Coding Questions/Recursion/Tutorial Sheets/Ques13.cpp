#include<bits/stdc++.h>
using namespace std;
void arrayrev(int a[],int strt, int end)
{
    if(strt>=end)
        return ;

    int temp=a[strt];
    a[strt]=a[end];
    a[end]=temp;

    arrayrev(a,strt+1,end-1);
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    arrayrev(a,0,n-1);
    for(i=0;i<n;i++)
        cout<<a[i];
    }
