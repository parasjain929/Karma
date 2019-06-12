#include<bits/stdc++.h>
using namespace std;
int f(int n);
int main()
{
    int n,b;
    cin>>n;
    b=f(n);
    cout<<b;

}
int f(int n)
{
    if(n>=1)
    {
        return n*f(n-1);
    }
    else
        return 1;

}
