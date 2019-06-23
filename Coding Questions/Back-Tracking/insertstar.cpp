#include<bits/stdc++.h>
using namespace std;
void insertstar(char *str, string outs,int length)
{
        int j=0;
        for(int i=0;i<length;i++)
        {
            if(str[i]==str[i+1])
            {
                outs+=str[i];
                outs+="*";
                outs+=str[i+1];
                i++;
            }
            else
            {
                outs+=str[i];
            }
        }
        cout<<outs<<endl;
        return ;
}
int main()
{
    char str[]="abbccd";
    char outstr[100]="";
    int l=strlen(str);
    insertstar(str,outstr,l);
}
