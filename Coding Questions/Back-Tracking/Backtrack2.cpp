#include<bits/stdc++.h>
using namespace std;
void gs(char *s,int start,int end)
{
    if(start==end)
    {
        s[start]='\0';
        cout<<s<<endl;
        return;
    }
    s[start]='0';
    gs(s,start+1,end);
    s[start]='1';
    gs(s,start+1,end);
}
int main()
{
    int k;
    cin>>k;
    char str[k+1];
    str[k]='\0';
    gs(str,0,k);
}
