#include<bits/stdc++.h>
using namespace std;
fib(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
        int n;
        cin>>n;
        int n2=fib(n);
        cout<<n2;
}
