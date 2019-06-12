#include<bits/stdc++.h>
using namespace std;
int Sumd(int,int);
int main()
{
    int n,sum=0;
    cin>>n;
    cout<<Sumd(n,sum);
}
int Sumd(int n,int sum)
{
    if(n==0) return 0;
    return sum+n%10+Sumd(n/10,sum);
}
