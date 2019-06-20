#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
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
    int minm=INT_MAX;
    while(!s.empty())
    {
        if(minm>s.top())
            minm=s.top();
        s.pop();
    }
    cout<<minm;

}
