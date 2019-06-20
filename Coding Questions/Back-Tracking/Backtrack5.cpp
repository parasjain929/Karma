#include<bits/stdc++.h>
using namespace std;
int myatoi(char *c)
{
	int i=0,value=0;
	while(c[i]!='\0')
	{
		if(c[i]>='0'&&c[i]<='9')
		{
		value=value*10+(c[i]-'0');
	    i++;
		}
		else return -1;
	}
	return value;
}
void gs2(char *s,int start,int end)
{
    int i;
    if(start==end)
    {
        s[start]='\0';
        if(atoi(s)%7==0)
            cout<<s<<" ";
        return;
    }
    if(start==0)
    {
        for(i=1;i<=9;i++)
        {
            s[start]='0'+i;
            gs2(s,start+1,end);
        }
    }
    else
    {
        for(i=0;i<=9;i++)
        {
            s[start]='0'+i;
            gs2(s,start+1,end);
        }
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
