

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
        maze[x][y]=-1;
        cout<<"y is"<<x<<" "<<y<<endl;
        if(solvemaze(maze,x,y+1,n))
            return 1;
    }
    if(issafe(maze,x+1,y,n)==1) //downward
    {
        maze[x][y]=-1;
        cout<<"x is"<<x<<" "<<y<<endl;
        if(solvemaze(maze,x+1,y,n))
            return 1;
    }
    return 0;

}
int main()
{
    int n;
    cout<<"Enter Size of Matrix";
    cin>>n;
    int maze[4][4]={{1,1,0,0},{0,1,1,1},{0,0,1,0},{0,1,1,1}};
    int i,j;
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>maze[i][j];
    }*/
    int c=solvemaze(maze,0,0,n);
    cout<<c;

}
