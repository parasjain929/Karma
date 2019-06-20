#include<bits/stdc++.h>
using namespace std;
int main()
{
        char c[10];
        cin>>c;
        int i=0;
        int a,b,flag=0;
        int length=strlen(c);
        while(i!=length-1)
        {
            a=c[i]-'a';
            b=c[i+1]-'a';
            if(a>b)
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==1)
            cout<<"no";
        else
            cout<<"yes";

}


