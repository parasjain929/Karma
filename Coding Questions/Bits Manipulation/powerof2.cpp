#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0,pos;
    cout<<"Enter number";
    cin>>n;
    int nb=sizeof(int)*8;
    for(int k=0;k<nb;k++)
        {
            if(n & 1<<k)
            {
                count++;
            }
    }
    if(count==1n)
        cout<<"yes";
    else
        cout<<"no";
    }
