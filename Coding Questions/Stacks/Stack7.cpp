#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s,s1;
    int n,v;
    cout<<"Enter no. of values to insert";
    cin>>n;
    while(n)
    {
        cout<<"enter value";
        cin>>v;
        s.push(v);
        n--;
    }
    while(!s.empty())
    {
        if(s.top()%2!=0)
            s1.push(s.top());
        s.pop();
    }
     while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }

}
