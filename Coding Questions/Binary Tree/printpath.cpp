#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
};
void printpath(node *root,int path[],int start)
{
    if(root==NULL)
        return ;
    if((root->left==NULL)&&(root->right==NULL))
    {
        for(int i=1;i<start;i++)
        {
            cout<<path[i]<<" ";
        }
        cout<<root->data;
        cout<<endl;
        return ;
    }
    else{
    path[start]=root->data;
    printpath(root->left,path,start+1);
    printpath(root->right,path,start+1);
    }
}
int height(node *root)
{
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
int main()
{
    /*    5
        /    \
       15    20
       /      \
      21      17 */


        node* root;
        root = new node();
        root->data=5;

        node*temp;
        temp= new node();
        temp->data=15;
        root->left=temp;

        node* temp1;
        temp1= new node();
        temp1->data=21;
        temp->left=temp1;

        temp=new node();
        temp->data=20;
        root->right=temp;

        temp1=new node();
        temp1->data=17;
        temp->right=temp1;

        int h=height(root);
        //cout<<h;
        int path[h];
        printpath(root,path,1);

}
