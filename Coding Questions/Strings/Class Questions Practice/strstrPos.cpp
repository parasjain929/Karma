#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0,i=0,j=0,a;

    char s1[20],s2[20];
    cin>>s1>>s2;
    int len1=strlen(s1);
    int len2=strlen(s2);
    while(i<len1 && j<len2)
    {
        if(s1[i]==s2[j])
        {
            if(flag==0)
            {
                a=i;
                flag=1;
            }j++;

        }
        else if(s1[i]!=s2[j])
        {
            j=0;
            flag=0;
        }
        i++;

    }
    if(j==len2)
        cout<<a<<" ";
    else
        cout<<"Not found";

}
