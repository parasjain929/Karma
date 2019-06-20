#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
};
int sumnodes(node *root)
{
    if(root==NULL)
        return 0;
    else
        return(sumnodes(root->left)+sumnodes(root->right))+root->data;
}
int identical(node *root1,node *root2)
{
    if((root1==NULL) && (root2==NULL))
        return 1;
    if((root1==NULL) || (root2==NULL))
        return 0;
    if(root1->data == root2->data)
    {
        if( identical(root1->left,root2->left)
        && identical(root1->right,root2->right))
            {return 1;}
    }
    return 0;
}
int main()
{
        node* root1;
        root1 = new node();
        root1->data=5;

        node*temp;
        temp= new node();
        temp->data=15;
        root1->left=temp;

        node* temp1;
        temp1= new node();
        temp1->data=21;
        temp->left=temp1;

        temp=new node();
        temp->data=20;
        root1->right=temp;

        temp1=new node();
        temp1->data=17;
        temp->right=temp1;

         node* root2;
        root2 = new node();
        root2->data=5;


        temp= new node();
        temp->data=15;
        root2->left=temp;


        temp1= new node();
        temp1->data=21;
        temp->left=temp1;

        temp=new node();
        temp->data=20;
        root2->right=temp;

        /*temp1=new node();
        temp1->data=17;
        temp->right=temp1;*/

       int c=identical(root1,root2);
        cout<<c;

        int sum1=sumnodes(root1);
        int sum2=sumnodes(root2);
        cout<<sum1<<sum2;

}
