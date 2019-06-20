#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
    int c=0,n,k,v;
    cout<<"Enter no. of values to insert";
    cin>>n;
    while(n)
    {
        cout<<"enter value";
        cin>>v;
        s.push(v);
        n--;
    }
    cout<<"Enter K ";
    cin>>k;
    while(k)
    {
        cout<<s.top()<<endl;
        s.pop();
        k--;
    }

}
