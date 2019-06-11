#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
        int i,len,index,count1[26]={0};
        char c[20],b[20];
        cout<<"Enter The String"<<endl;
        cin>>c;
        len=strlen(c)-1;
        for(i=0;i<=len;i++)
        {
            index=c[i]-'a';
            count1[index]++;
        }
        for(i=1;i<=25;i++)
        {
            count1[i]+=count1[i-1];
        }
        for(i=len;i>=0;i--)
        {
            index =((count1[c[i]-'a']--)-1);
            b[index]=c[i];
            //cout<<b[index];
        }
        cout<<endl;
        for(i=0;i<=len;i++)
            cout<<b[i];
    }
