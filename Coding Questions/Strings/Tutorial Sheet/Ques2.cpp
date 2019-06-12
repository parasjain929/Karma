#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i=0,c=0;
    char str[20];
    cin>>str;
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
            c++;
            i++;
    }
    cout<<c<<" ";
}
