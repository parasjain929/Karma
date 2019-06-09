#include<bits/stdc++.h>
using namespace std;
void straight(int **a,int n,int k)
{
        int srow,scol;
        if(k<n)
    {
        srow=k;
        scol=0;
    }
    else
    {
        scol=k-n+1;
        srow=n-1;
    }
    for( ;srow>=0 && scol<n;srow--,scol++)
    {
        cout<<a[srow][scol]<<" ";
    }
}
void reverse1(int **a,int n,int k)
{
    int srow,scol;
     if(k<n)
    {
        srow=0;
        scol=k;
    }
    else
    {
        scol=n-1;
        srow=k-n+1;
    }
    for( ;srow<n && scol>=0;srow++,scol--)
    {
        cout<<a[srow][scol]<<" ";
    }
}
int main()
{
    int n,i,j,b;
    cin>>n;
    int **a;
    a =(int **)malloc(sizeof(int *)*n);
    for(i=0;i<n;i++)
    {
        a[i]=(int *)malloc(sizeof(int)*n);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(b=0;b<=(2*n)-1;b++)
    {
        if(b%2==0)
        {

            reverse1(a,n,b);
        }
        else
        {
            straight(a,n,b);
        }
    }
}
