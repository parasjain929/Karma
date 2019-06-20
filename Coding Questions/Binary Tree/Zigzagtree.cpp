#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
};
void printlevel(node *root, int level)
{
    if(root==NULL)
        return ;
    if(level==1)
        {
            cout<<root->data<<endl;
            return ;
        }
    printlevel(root->left,level-1);
    printlevel(root->right,level-1);
}
void printlevelopp(node *root, int level)
{
    if(root==NULL)
        return ;
    if(level==1)
        {
            cout<<root->data<<endl;
            return ;
        }
    printlevelopp(root->right,level-1);
    printlevelopp(root->left,level-1);

}
int height(node *root)
{
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
int main()
{
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

        for(int i=1;i<=h;i++)
        {
            if(i%2==0)
                printlevelopp(root,i);
            else
                printlevel(root,i);
        }

}
