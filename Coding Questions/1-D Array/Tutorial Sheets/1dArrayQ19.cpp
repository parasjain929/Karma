#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,second,first = second = INT_MIN;
    cin>>n;
    int arr[n],s;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (i = 0; i < n ; i ++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==second)
        {
            s=i;
        }
    }
    arr[s]=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i];
        }
}    }
