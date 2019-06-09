#include<bits/stdc++.h>
using namespace std;
int gcd(int, int);
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if(n1>n2)
        cout<<gcd(n1,n2);
    else
        cout<<gcd(n2,n1);
}
int gcd(int n1, int n2)
{
    if(n1%n2==0) return n2;
    return gcd(n2, n1%n2);
}
