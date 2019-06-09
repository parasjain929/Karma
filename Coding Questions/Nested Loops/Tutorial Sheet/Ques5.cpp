
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,r,c;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>r>>c;
    int b[r][c];
    int k=0,f=0;
    for(i=0;i<n;i++)
    {
            b[k][f]=a[i];
            f++;
            if(f==c)
            {
                k++;
                f=0;}
            }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

            cout<<b[i][j];
        }
        cout<<
        endl;
}
}

