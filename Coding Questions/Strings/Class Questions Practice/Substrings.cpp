#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,len=0;
    char s[20];
    cin>>s;
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    i=0;j=0;
    int c;
    char sub[20];
    for(i=0;i<=len;i++)
    {
        c=0;
        for(j=i;j<=len;j++)
        {
            sub[c]=s[j];
            c++;
            sub[c]=0;
            cout<<sub<<endl;
        }
    }
}
