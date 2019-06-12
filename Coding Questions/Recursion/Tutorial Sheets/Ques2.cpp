#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse( int n, int rev) {
    if(n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}
int main()
{
	int n;
	cout<<"enter number  : ";
	cin>>n;
	if(n-reverse(n,0)==0)
		cout<<"palindrome"<<endl;
	else
		cout<<"not palindrome"<<endl;
	return 0;
}
