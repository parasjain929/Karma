#include<bits/stdc++.h>
using namespace std;
void swap(char &a, char &b)
{
    char temp=a;
    a=b;
    b=temp;
}
void permute(char a[],int l,int r)
{
    int i;
    if(l==r)
    {
        cout<<a<<endl;
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
    char str[]="abc";
    int len=strlen(str);
    permute(str,0,len);
}
