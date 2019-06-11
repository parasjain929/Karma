#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,flag=0,len1,len2,count1[26]={0},count2[26]={0};
    char s1[20],s2[20];
    cin>>s1>>s2;
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1!=len2)
    {
        cout<<"NOT A ANAGRAM";
    }
    else
    {
        for(i=0;i<len1;i++)
        {
            count1[s1[i]-'a']++;
            count2[s2[i]-'a']++;
        }
        for(i=0;i<len1;i++)
        {
            if(count1[i]!=count2[i])
            {
                flag=1;

                break;
            }
        }
        if(flag==0)
            cout<<"Anagram";
        else
            cout<<"Not a Anagram";
    }
}
