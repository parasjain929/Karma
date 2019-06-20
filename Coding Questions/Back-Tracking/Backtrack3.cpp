#include<bits/stdc++.h>
using namespace std;
void gs2(char *s,int start,int end)
{
    if(start==end)
    {
        s[start]='\0';
        cout<<s<<endl;
        return;
    }
    if(s[start-1]=='1')
    {
       s[start]='0';
       gs2(s,start+1,end);
    }
    else
    {
        s[start]='0';
        gs2(s,start+1,end);
        s[start]='1';
        gs2(s,start+1,end);
}
}
int main()
{
    int k;
    cin>>k;
    char str[k+1];
    str[k]='\0';
    gs2(str,0,k);
}
