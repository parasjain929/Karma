#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    int i,len;
    char c[]="{{()[] }}";
    char temp;
    stack<char> s;
    len=strlen(c);
    for(i=0;i<len;i++)
    {
        if(c[i]=='{' || c[i]=='(' || c[i]=='[')
            s.push(c[i]);
        else
            {
                if(s.empty())
                {
                    cout<<"false";
                    break;
                }
                temp=s.top();
                if(c[i]==')')
                {
                    if(temp!='(')
                        cout<<"False1";
                    else
                        s.pop();
                }

                else if(c[i]=='}')
                {
                    if(temp!='{')
                        cout<<"False2";
                    else
                        s.pop();
                }

                else if(c[i]==']')
                {
                    if(temp!='[')
                        cout<<"False3";
                    else
                        s.pop();
                }
        }
}   }




