#include<bits/stdc++.h>
using namespace std;
int bsearch(int a[],int low, int high,int key)
{
    int mid=(low+high)/2;
    if(low>high)
        return -1;
    if(a[mid]==key)
        return mid;
    if(a[mid]>key)
        bsearch(a,low,mid-1,key);
    else
        bsearch(a,mid+1,high,key);

}
int main()
{

        int n,i,key;
        cout<<"Enter no. of elements";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"enter key";
        cin>>key;
        cout<<"Position is "<<bsearch(a,0,n,key);
}
