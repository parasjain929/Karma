#include<bits/stdc++.h>
using namespace std;
void count_inverted(int [],int);
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    count_inverted(a, n);
}
void count_inverted(int a[],int n)
{
    int count=0,i,j;
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
                if(a[i]>a[j])
                    count++;
        }
    }
    cout<<count;
    }
