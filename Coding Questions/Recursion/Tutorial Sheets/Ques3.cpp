#include<bits/stdc++.h>
using namespace std;
int mul(int,int);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<mul(a,b);
}
int mul(int a, int b)
{
    if(b==0) return 1;
    return a+mul(a,b-1);
}
