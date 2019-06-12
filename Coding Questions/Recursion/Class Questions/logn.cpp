#include<bits/stdc++.h>
using namespace std;
double Sumlog (int);
int main()
{
    int N;
    cin>>N;
    cout<<Sumlog(N);
}
double Sumlog(int N)
{
    if(N==0) return 0;
    return Sumlog(N-1) + log(N);
}
