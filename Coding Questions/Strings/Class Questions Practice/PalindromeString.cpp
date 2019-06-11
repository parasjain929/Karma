#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,f=0,j,len;
    char s[20];
    cin>>s;
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    i=0,j=len-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            f=1;
            break;
        }
        i++;
        j--;
    }
    if(f==1)
    {
        cout<<"Not A Palindrome";
    }
    else
        cout<<"Palindrome";
}
