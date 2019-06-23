#include<bits/stdc++.h>
using namespace std;
void swap1(char &a, char &b)
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
        return;
    }
    for(i=l;i<r;i++)
    {
        if(a[l]==a[i] && i!=l){

        }
        else{
        swap1(a[l],a[i]);
        permute(a,l+1,r);
        swap1(a[l],a[i]);
        }

    }
}
int main()
{
    char str[]="aab";
    int len=strlen(str);
    sort(str,str+len);
    permute(str,0,len);
}
