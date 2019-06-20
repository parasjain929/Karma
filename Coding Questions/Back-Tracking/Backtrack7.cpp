#include<bits/stdc++.h>
using namespace std;
void gstring(char *s,int start,int end)
{
	if(start==end)
	{
		s[start]='\0';
		cout<<s<<" ";
	    return ;
	}
	s[start]='+';
	gstring(s,start+2,end);
	s[start]='-';
	gstring(s,start+2,end);
	s[start]='*';
	gstring(s,start+2,end);
	s[start]='/';
	gstring(s,start+2,end);
}
int main()
{
	int n;int i;
	cout<<"Enter the number of inputs"<<endl;
	cin>>n;
	int size=n+(n-1);int k=1;
	char str[size+1];int in;
	for(i=0;i<size;i=i+2)
	{
		cout<<"enter input";
		cin>>in;
		str[i]=in+'0';
	}

	str[size]='\0';
	gstring(str,1,size);
	return 0;
}
