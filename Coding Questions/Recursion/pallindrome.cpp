#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int pallindrome(string ,int,int);
int main()
{
    int a,l=0,b;
    string n;
    cin>>n;
    b=n.length();
    a=pallindrome(n,b-1,l);
    cout<<a;
}
int pallindrome (string n, int b,int l)
{
        if(l<b)
        {
            if(n[l]!=n[b])
                return 0;
        return pallindrome(n,b-1,l+1);
        }
            return 1;
}
