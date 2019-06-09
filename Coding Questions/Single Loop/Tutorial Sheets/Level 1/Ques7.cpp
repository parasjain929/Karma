#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n1,n2,limit,f1=0,f2=0;
    cin>>n1>>n2;
    if(abs(n2-n1)!=2)
    {
            cout<<"NO";
    }
    else
    {
        limit=sqrt(n1);
        for(i=2;i<=limit;i++)
        {
            if(n1%i==0)
            {

                    f1=1;
                    break;
            }
        }
        limit=sqrt(n2);
        for(i=2;i<=limit;i++)
        {
            if(n2%i==0)
            {

                    f2=1;
                    break;
            }
        }
    }
    if(f1==0 && f2==0)
    {
            cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}
