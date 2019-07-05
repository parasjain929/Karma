#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,nb=0,k;
    cout<<"enter number";
    cin>>n>>k;
    int temp=n;
    int c=0;
    while(temp)
    {
        c++;
        temp/=2;
    }
    nb=c;
    n=n<<k|n>>(nb-k);
    cout<<n;

}
