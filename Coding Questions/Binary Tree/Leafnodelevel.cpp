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
    return max(height(root->left),height(root->right))+1;
}
int checklevel(node *root)
{
    if(root==NULL)
        return 0;
    checklevel(root->left);
    checklevel(root->right);
    if(height(root->left)==height(root->right))
            return 1;
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

        int h1=height(root->left);
        int h2=height(root->right);
        if(h1==h2)
            cout<<"SAME";

        else
            cout<<"NOT SAME";
        int c=checklevel(root);
        cout<<c;

}
