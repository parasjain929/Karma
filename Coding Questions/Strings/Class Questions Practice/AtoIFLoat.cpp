#include<bits/stdc++.h>
using namespace std;
float myatoi(char []);
int main()
{

    char c[10];
    cin>>c;
    cout<<myatoi(c);
}
float myatoi(char x[])
{
    int i=0;
    float value1=0,value2=0,c=0;
    while(x[i]!='.')
    {
            if(x[i]>='0' && x[i]<='9')
            {
                value1=value1*10+(x[i]-'0');
                i++;
            }

    }
    i++;
    while(x[i]!='\0')
    {
            if(x[i]>='0' && x[i]<='9')
            {
                value2=value2*10+ x[i]-'0';
                i++;
                c++;
            }

        }
    return value1+(value2/pow(10,c));
}
