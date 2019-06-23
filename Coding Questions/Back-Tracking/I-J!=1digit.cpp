#include<bits/stdc++.h>
using namespace std;
int count1=0;
void permute(char a[],int l,int r)
{
    int i;
    if(l==r)
    {
        int l=strlen(a);
        for(i=1;i<l;i++)
        {
            if(a[i]-a[i-1]==1)
                return;
        }
        count1++;
        cout<<a<<" ";
        return;
    }
    for(i=l;i<r;i++)
    {
        swap(a[l],a[i]);
        permute(a,l+1,r);
        swap(a[l],a[i]);
    }
}
int main()
{
    char str[]="1234";
    int len=strlen(str);
    permute(str,0,len);
    cout<<"count is "<<count1;
}
