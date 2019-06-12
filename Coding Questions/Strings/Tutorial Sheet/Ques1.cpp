#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    char str[20];
    cin>>str;
    while(str[i]!='\0')
    {
        str[i]=(str[i]-'a')+'A';
        i++;
    }
    cout<<str;
    }
