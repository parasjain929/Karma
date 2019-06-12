#include<bits/stdc++.h>
using namespace std;
void d2b(int);
int main()
{
    int n,a;
    cin>>n;
    d2b(n);
}
void d2b(int n)
{
    if(n==0) return;
    d2b(n/2);
    cout<<n%2;
}
