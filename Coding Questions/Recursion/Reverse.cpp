#include<bits/stdc++.h>
using namespace std;
void reverse(int [],int, int);
int main()
{
    int n,i,l=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    reverse(a,n-1,l);

    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }

}
void reverse(int a[],int n, int l)
{
    int temp;
    if(l<n){
            temp=a[l];
            a[l]=a[n];
            a[n]=temp;

    reverse(a,n-1,l+1);
    }
}
