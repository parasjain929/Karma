#include<bits/stdc++.h>
using namespace std;
void reverse(char * ,int, int);
int main()
{
    int n=0,i=0,l=0;
    char s[100];
//    getline(cin,s);
scanf("%[^\n]s",s);
    while(s[i]!='\0')
    {
        n++;
        i++;
    }
   // cout<<s<<endl;
    reverse(s,n-1,l);
    cout<<s;

}
void reverse(char *a,int n, int l)
{
    int temp;
    if(l<n){
            temp=a[l];
            a[l]=a[n];
            a[n]=temp;

    reverse(a,n-1,l+1);
    }
}
