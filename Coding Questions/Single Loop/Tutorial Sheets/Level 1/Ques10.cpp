#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, i, gcd;
    cin>>n1>>n2;

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    if(gcd==1)
    {
        cout<<"Co-Prime";
    }
    else
        cout<<"Non Co-Prime";

    return 0;
}
