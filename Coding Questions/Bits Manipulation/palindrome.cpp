#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter number";
    cin>>n;
    int temp=n;
    int c=0;
    while(temp)
    {
        c++;
        temp/=2;
    }
    //cout<<c;
    int nb=c;
    int start=0,end1=nb-1;
    while(start<end1)
    {
            //cout<<"\nstart:"<<(n & (1<<start))<<"end:\n"<<((n & (1<<end1))>>end1);
            int res=(n & (1<<start))^((n & (1<<end1))>>end1);
            if(res)
            {
                //cout<<"1";
                flag=1;
                break;
            }
            start++;
            end1--;
    }
    if(flag==0)
        cout<<"yes";
    else
        cout<<"no";
}
