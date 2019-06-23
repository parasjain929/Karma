#include<bits/stdc++.h>
using namespace std;
int issafe(int maze[4][4],int x,int y, int n)
{
        if((x>=0)&&(x<=n-1)&& (y>=0) && (y<=n-1) && maze[x][y]==1)
            return 1;
        return 0;
}
int solvemaze(int maze[4][4], int x, int y, int n)
{
    if(x==n-1 && y==n-1)
        {
            return 1;
        }
    if(issafe(maze,x,y+1,n)==1) //right
    {
        y=y+1;
        cout<<"y is"<<y<<endl;
        solvemaze(maze,x,y,n);
    }
    else if(issafe(maze,x+1,y,n)==1) //downward
    {
        x=x+1;
        cout<<"x is"<<x<<endl;
        solvemaze(maze,x,y,n);
    }
    else
        return 0;

}
int main()
{
    int n;
    cout<<"Enter Size of Matrix";
    cin>>n;
    int maze[4][4];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>maze[i][j];
    }
    int c=solvemaze(maze,0,0,n);
    cout<<c;

}
