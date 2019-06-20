#include<bits/stdc++.h>
using namespace std;
template<class T>
    void swapp(T &var1,T &var2)
    {
        T temp;
        temp=var1;
        var1=var2;
        var2=temp;
    }
int main()
{
    char c='x',d='y';
    swapp(c,d);
    cout<<c<<" "<<d;
}
