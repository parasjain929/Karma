#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<"length is "<<str.length();
    cout<<endl;
    cout<<str.empty()<<endl;
    str+=" jain";
    cout<<str<<endl;
    str.push_back('w');
    cout<<str<<endl;
    cout<<str.find("jain")<<endl;
    char str1[]="paras";
    cout<<str1<<endl;
    char *p= strstr(str1,"a");
    cout<<p<<endl;
    str.erase(2,2);
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;



}
