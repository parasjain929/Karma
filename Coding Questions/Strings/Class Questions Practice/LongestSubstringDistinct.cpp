#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,len=0,k,max=0;
    char s[20];
    cin>>s;
    string lon;
    int count[26];
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
        for(k=0;k<26;k++)
        {
            count[k]=0;
        }
        for(j=i;j<=len;j++)
        {
            sub[c]=s[j];
            count[sub[c]-'a']++;
            c++;
            sub[c]=0;
            int flag=0;
            for(k=0;k<26;k++)
            {
                if(count[k]>1)
                    flag=1;
            }
            if(flag==1){
                //cout<<"Not Distinct"<<endl;
                }
            else{
                if(c>max)
            {
                max=c;
                lon=sub;
            }
            }
        }
    }
    cout<<lon;
}
