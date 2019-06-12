#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i=0,c=1;
    string str;

    getline(cin, str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
            c++;
            i++;
    }
    cout<<c<<" ";
}
