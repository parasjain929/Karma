#include<bits/stdc++.h>
using namespace std;
int ap(int, int, int,int);
int main()
{
        int a,d,n,result,sum=0;
        cin>>a>>d>>n;
        result=ap(a,d,n,sum);
        cout<<result;
        }
int ap(int a,int d, int n,int sum)
{
    if(n==0) return 0;

    return sum+=sum+(a+(n-1)*d)+ap(a,d,n-1,sum);
}
