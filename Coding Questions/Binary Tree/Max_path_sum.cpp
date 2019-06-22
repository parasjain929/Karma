#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
};
int height(node *root)
{
    if(root==NULL)
        return 0;
    return max(root->data+height(root->left),root->data+height(root->right));
}
int findmax(node *root)
{

    if(root==NULL)
        return 0;
    return max(height(root->left)+height(root->right)+root->data,max(findmax(root->left),findmax(root->right)));
}

int main()
{
    /*    5
        /    \
       15    20
       /      \
      21      17
                \
                25
                 \
                 18     unbalanced*/


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

        temp=new node();
        temp->data=25;
        temp1->left=temp;

        temp1=new node();
        temp1->data=18;
        temp->right=temp1;

        int h=height(root);
        //cout<<h;
        int path[h];
        cout<<findmax(root);

}
