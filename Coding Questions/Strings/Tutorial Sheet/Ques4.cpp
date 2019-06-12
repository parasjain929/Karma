#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i=0,c=0,count1[26]={0},max1=0;
    char str[20];
    char res;
    cin>>str;
    int len=strlen(str);
    while(str[i]!='\0')
    {
        count1[str[i]-'a']++;
        if(count1[str[i]-'a']>max1)
            {
                max1=count1[str[i]-'a'];
                res=str[i];
            }
            i++;
    }
    cout<<res<<" ";
}
