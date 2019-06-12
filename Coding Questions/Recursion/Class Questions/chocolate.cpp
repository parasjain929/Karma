#include<bits/stdc++.h>
using namespace std;
int f(int ,int, int);
int recwrap(int ,int);
int main()
{
    int money, price, wrap;
    cin>>money>>price>>wrap;
    cout<<f(money,price,wrap);
}
int f(int money, int price, int wrap)
{
    int nfc=money/price;
    return nfc + recwrap(nfc,wrap);
}
int recwrap(int nfc, int wrap)
{
    if(nfc<wrap) return 0;
    int newc=nfc/wrap;
    return newc+ recwrap(newc+nfc%wrap,wrap);
}
