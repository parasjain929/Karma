#include<bits/stdc++.h>
using namespace std;
void removedup(char s[],char x[])
{
    int i=0,j=0;
    while(x[i]!='\0')
    {
        if(x[i+1]!=x[i])
        {
            s[j]=x[i];
            j++;
        }
        i++;
    }
    s[j]='\0';
    cout<<s<<endl;
}
void compare(char x[], char y[],int len)
{
    int i=0,flag=0;
    while(i<(len))
    {
        if(x[i]!=y[i])
        {
            flag=1;
            cout<<"Not in Same Order";
            break;
        }
        i++;
    }
    if(flag==0)
    {
        cout<<"Same Order";
    }
}
int main()
{
    int i=0,len=0;
    char str1[10],str2[10],str11[20],str22[20];
    cin>>str1>>str2;
    while(str1[i]!='\0')
    {
        len++;
        i++;
    }
    cout<<len<<endl;
    removedup(str11,str1);
    removedup(str22,str2);
    cout<<str11<<" "<<str22<<" "<<len<<endl;
    len=strlen(str11);
    compare(str11,str22,len);
}
