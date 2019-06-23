#include<bits/stdc++.h>
using namespace std;
void powerset(char *str, int position, int length, string outs)
{
    if(position == length)
    {
        cout<<outs<<endl;
        return;
    }
    powerset(str,position+1,length,outs);
    powerset(str,position+1,length,outs+str[position]);

}
int main()
{
    char outstr[10]="";
    char str[]="abc";
    int len=strlen(str);
    powerset(str,0,len,outstr);
}
