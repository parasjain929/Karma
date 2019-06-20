#include<stack>
#include<bits/stdc++.h>
using namespace std;
int precedance(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else
        -1;
}
void infixtopostfix(string str)
{
    stack <char> s;
    s.push('N');
    int i;
    string s2; //new string
    int l=str.length();
    for(i=0;i<l;i++)
    {
        if(str[i]>='1' && str[i]<='9')
           s2+=str[i];
        else if(str[i]=='(')

        s.push('(');
        else if(str[i]==')')
            {
                while(s.top()!='N' && s.top()!='(')
                    {
                        char c=s.top();
                        s.pop();
                        s2+=c;
                    }
                    if(s.top()=='(')
                    {
                        char c=s.top();
                        s.pop();
                    }
            }
            else
            {
                while(s.top()!='N' && precedance(str[i])<=precedance(s.top()))
                {
                    char c=s.top();
                    s.pop();
                    s2+= c;
                }
                s.push(str[i]);
            }
    }
            while(s.top()!='N')
            {
                char c=s.top();
                s.pop();
                s2+=c;
            }


        cout<<s2<<" ";
}
int main()
{
        string str;
        cout<<"ENTER STRING";
        cin>>str;
        infixtopostfix(str);

}
