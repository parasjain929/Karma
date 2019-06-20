#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s1,s2;
    int n,v;
    cout<<"Enter no. of values to insert for stack 1";
    cin>>n;
    while(n)
    {
        cout<<"enter value";
        cin>>v;
        s1.push(v);
        n--;
    }
    cout<<"Enter no. of values to insert for stack 2";
    cin>>n;
    while(n)
    {
        cout<<"enter value";
        cin>>v;
        s2.push(v);
        n--;
    }
    if(s1.size()!=s2.size())
        cout<<"NOT EQUAL";
    else
    {
          while(!s1.empty() || !s2.empty())
          {
                if(s1.top()!=s2.top())
                    {
                        cout<<"NOT EQUAL";
                        break;
                    }
                    s1.pop();
                    s2.pop();
            }
            if(s1.empty() && s2.empty())
                cout<<"EQUAL";
    }
}
