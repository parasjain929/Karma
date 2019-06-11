#include<bits/stdc++.h>
#include<iostream>

using namespace std;
void rotate(char* str, int i, int n)
{
    static char a=str[0];
	if(i==n)
	{
		str[i]=a;
		return ;
	}
	else{
	str[i]=str[i+1];
	rotate(str,i+1,n);
	}

}


int main()
{
	char str [20];
	cout<<"enter string : ";
	cin>>str;
	rotate(str,0,strlen(str)-1);
	cout<<str<<endl;
	return 0;
}
