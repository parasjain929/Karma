#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int myatoi(char *);
int main()
{
	char c[10];
	cin>>c;
	cout<<myatoi(c);
	return 0;
}
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
