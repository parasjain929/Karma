#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int checkPair(string str,char a, char b)
{
	int i=0,idx1=0,idx2=0;
	while(str[i]!='\0')
	{
		if(str[i]==a)
			idx1=i;
		i++;
	}
	idx2=0;
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]==b){
			idx2=i;
			break;
		}
		i++;
	}
	if(idx1<idx2)
		return 1;
	return 0;

}

int main()
{
	int i;
	string str,pat;
	cout<<"enter string : ";
	cin>>str;
	cout<<"enter pattern : ";
	cin>>pat;
	int len=pat.length();
	for(i=0;i<len-1;i++)
	{
		if(checkPair(str,pat[i],pat[i+1])==0)
		{
			cout<<"Not in order"<<endl;
			return 0;
		}
	}
	cout<<"In order"<<endl;

	return 0;
}
