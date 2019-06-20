#include<bits/stdc++.h>
using namespace std;
void check(int *a,int *s,int start,int end,int key,int m)
{
	if(m==2)
	{
		if(s[0]+s[1]==key)
		cout<<s[0]<<" "<<s[1]<<endl;
		return;
	}
	int i;
	for(i=start;i<end;i++)
	{
		s[m]=a[i];
		check(a,s,start+1,end,key,m+1);
	}
}
int main()
{
	int n,i;
	cout<<"Enter no. of values";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	int key;
	cout<<"Enter the value to check"<<endl;
	cin>>key;
	int str[2];
	check(arr,str,0,n,key,0);
	return 0;
}
