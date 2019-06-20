#include<bits/stdc++.h>
using namespace std;
char a[10][5]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void genword(char *s,int ar[],int start,int end1)

{
    int i,index;
    if(start==end1)
    {
        s[start]='\0';
        cout<<s<<endl;
        return ;
    }
    int limit=strlen(a[ar[start]]);
    for(i=0;i<limit;i++)
    {
        index=ar[start];
        s[start]=a[index][i];
        genword(s,ar,start+1,end1);
    }
}
int main()
{

        cout<<"enter size of no.";
        int n,i;
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        char s[n+1];
        s[n]='\0';
        genword(s,ar,0,n);

}
