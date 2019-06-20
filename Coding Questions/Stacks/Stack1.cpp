#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
    int c=0;
    s.push(10);s.push(5);s.push(7);s.push(6);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();

    while(s.empty()!=true)
    {
        c++;
        s.pop();
    }
    cout<<c<<endl;
}
