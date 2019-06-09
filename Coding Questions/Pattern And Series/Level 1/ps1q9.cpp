#include<iostream>
using namespace std;
int main()
{
int n,i,j,k,nspace,tprint=1;
cin>>n;
nspace=n/2;
for(i=1;i<=n/2;i++)
{
for(k=1;k<=nspace;k++)

cout<<" ";

for(j=1;j<=tprint;j++)
{if(j==1||j==tprint){
cout<<"*";
}
else{
cout<<" ";
}
}
cout<<endl;
nspace-=1;
tprint+=2;
}
for(i=n/2;i<=n;i++)
{
for(k=1;k<=nspace;k++)

cout<<" ";

for(j=1;j<=tprint;j++)
{if(j==1||j==tprint){
cout<<"*";
}
else{
        cout<<" ";

}
}
cout<<endl;
nspace+=1;
tprint-=2;
}
return 0;
}
