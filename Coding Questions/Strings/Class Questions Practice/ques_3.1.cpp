#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c[30],a[30];
	cin>>c;
	int len=strlen(c);
	int i=0,flag=0;
	while(i<len)
	{
	a[i]=c[i];
	i++;
    }
	a[i+1]='\0';
	sort(a,a+len);
	i=0;
	while(i<len)
	{
		if(a[i]!=c[i])
		{
			flag++;
			break;
		}
		else i++;
	}
	if(flag>0) cout<<"no";
	else cout<<"yes";
	return 0;
}
