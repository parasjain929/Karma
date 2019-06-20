#include<bits/stdc++.h>
using namespace std;
double myatoi(char []);
int main()
{

    char c[10];
    cin>>c;
    cout<<myatoi(c);
}
double myatoi(char x[])
{
    int i=0;
    float value1=0,value2=0,c=0,value3;
    double value4=0;
    while(x[i]!='.')
    {
            if(x[i]>='0' && x[i]<='9')
            {
                value1=value1*10+(x[i]-'0');
                i++;
            }

    }
    i++;
    while(x[i]!='e')
    {
            if(x[i]>='0' && x[i]<='9')
            {
                value2=value2*10+ x[i]-'0';
                i++;
                c++;
            }

        }
    value3=value1+(value2/pow(10,c));
    i++;
    while(x[i]!='\0')
        {
            if(x[i]>='0' && x[i]<='9')
            {
                value4=value4*10+(x[i]-'0');
                i++;
            }

    }
   return value3*pow(10,value4);
}
