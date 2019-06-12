#include<bits/stdc++.h>
using namespace std;
int sum(int,int);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
}
int sum(int a, int b)
{
    if(b==0) return 0;
    return a+sum(a,b-1);
}
