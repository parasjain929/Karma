#include<bits/stdc++.h>
using namespace std;
float myatoi(char *);
int poww(int k)
{
	int i,TEMP=1;
	for(i=0;i<k;i++)
	{
		TEMP*=10;
	}
	return TEMP;
}
int main()
{
	char c[10];
	cin>>c;
	cout<<myatoi(c);
	return 0;
}
float myatoi(char *c)
{
	int k=1;int count=0;
	int i=0;float value=0;
	while(c[i]!='.')
	{
	    if(c[i]>='0'&&c[i]<='9')
		{
		value=value*10+(c[i]-'0');
	    i++;
		}
		else return -1;	
    }
    while(c[i]!='\0')
    {
    	if(c[i]>='0'&&c[i]<='9')
		{
		value=value+((c[i]-'0')/poww(k));
	    i++;
		}
		else return -1;	
	}
	return value;
}
