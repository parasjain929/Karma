#include<bits/stdc++.h>
using namespace std;
int b2df(char *,int,int);
int main()
{
    char c[]="100010";
    cout<<b2df(c,strlen(c)-1,0);
}
int b2df(char *c,int last,int exp)
{
    if(last<0) return 0;
    return (c[last]-'0')*pow(2,exp)+b2df(c,last-1,exp+1);
}
