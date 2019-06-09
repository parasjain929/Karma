#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n1,limit,c=1;
    cin>>n1;
    limit=sqrt(n1);
    for(i=2;c<2 && i<=limit;i++)
        {
            while(n1%i==0)
            {
                n1/=i;
                c++;

            }
        }
        if(c==2)
        {

            cout<<"yes";
        }
        else
            cout<<"NO";




}
