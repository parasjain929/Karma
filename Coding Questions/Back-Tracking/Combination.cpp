#include<bits/stdc++.h>
using namespace std;
void comb(int arr[],int n,int r, int inp_idx,int out_arr[],int out_idx)
{
    int i;
    if(out_idx==r)
    {
        for(i=0;i<r;i++)
            cout<<out_arr[i];
        cout<<endl;
        return ;
    }
    if(inp_idx>=n)
        return ;
    out_arr[out_idx]=arr[inp_idx];
    comb(arr,n,r,inp_idx+1,out_arr,out_idx+1);


    comb(arr,n,r,inp_idx+1,out_arr,out_idx);
}
int main(){
    int arr[]={1,2,3,4,5};
    int r=3;
    int output[r];
    int n=sizeof(arr)/sizeof(int);
    comb(arr,5,r,0,output,0);
    }
