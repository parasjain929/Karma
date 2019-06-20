#include<bits/stdc++.h>
using namespace std;
int myatoi(char []);
int main()
{

    char c[10];
    cin>>c;
    cout<<myatoi(c);
}
int myatoi(char x[])
{
    int i=0,value=0;
    if(x[i]>='0' && x[i]<='9')
    {
        while(x[i]!='\0')
        {
            value=value*10+ x[i]-'0';
            i++;
        }
        return value;
    }
    else
        return -1;
}
