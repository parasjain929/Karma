#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,f=0,sum1=0,sum2=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]>n*n)
                f=1;
        }
    }
    if(f==1)
        cout<<"Not a Magic Matrix";
    else
    {
       for(i=0;i<n;i++)
       {
        sum1=sum1+=a[i][i];
        sum2=sum2+=a[i][n-i-1];
        }
        if(sum1!=sum2)
        {
            f=1;
        }
         for(i=0;i<n;i++)
        {
            int rowsum=0;
            for(j=0;j<n;j++)
            {
                rowsum+=a[i][j];
            }
            if(rowsum!=sum1)
                f==1;
        }
        for(i=0;i<n;i++)
        {
            int colsum=0;
            for(j=0;j<n;j++)
            {
                colsum+=a[j][i];
            }
            if(colsum!=sum1)
                f==1;
        }
        if(f==1)
         cout<<"Not a Magic Matrix";

         else
          cout<<"Magic Matrix";

}
}
