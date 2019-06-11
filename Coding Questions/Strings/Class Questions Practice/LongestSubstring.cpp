#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,len=0;
    string lon;
    char s[20];
    cin>>s;
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    i=0;j=0;
    int c,p,q;
    char sub[20];
    int max=0;
    for(i=0;i<=len;i++)
    {
        c=0;
        for(j=i;j<=len;j++)
        {
            sub[c]=s[j];
            c++;
            sub[c]=0;
            p=0,q=c-1;
            int f=0;
             while(p<q)
        {
            if(s[p]!=s[q])
            {
                f=1;
                break;
            }
            p++;
            q--;
        }
        if(f==1)
        {

        }
        else
            if(c>max)
            {
                max=c;
                lon=sub;
            }
        }
    }
    cout<<lon;
}
