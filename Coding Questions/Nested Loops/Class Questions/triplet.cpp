#include<bits/stdc++.h>
using namespace std;
void triplet(int [],int ,int ,int);
int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if((j!=i)&&(i!=k)&&(k!=j))
                    triplet(a,i,j,k);
            }
        }
    }
}
void triplet(int a[],int i,int j,int k)
{
    if((a[i]*a[i])+(a[j]*a[j])==a[k]*a[k])
        cout<<a[i]<<a[j]<<a[k]<<"True"<<endl;
    else
        cout<<a[i]<<a[j]<<a[k]<<"False"<<endl;
}
