#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,c1=0,c2=0;
    cin>>r>>c;
    int a[r][c],even[5],odd[5];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[r][c];
            if(a[r][c]%2==0)
            {
                even[c1]=a[r][c];
                c1++;
            }
            else
                {
                   odd[c2]=a[r][c];
                   c2++;
                }
            }
        }
        for(i=0;i<c1;i++)
        {
            cout<<even[i];
        }
        for(i=0;i<c2;i++)
        {
            cout<<odd[i];
        }
    }
