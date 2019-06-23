#include<bits/stdc++.h>
using namespace std;
void gs2(char *s,int start,int end)
{
    int i;
    if(start==end)
    {
        s[start]='\0';
        cout<<s<<" ";
        return;
    }
    if(start==0)
    {
        for(i=1;i<=9;i++)
        {
            if(s[start-1]=='0'+i){
            }
            else{
            s[start]='0'+i;
            gs2(s,start+1,end);}
        }
    }
    else
    {
        for(i=0;i<=9;i++)
        {
            if(s[start-1]=='0'+i){
            }
            else{
            s[start]='0'+i;
            gs2(s,start+1,end);
        }}
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
