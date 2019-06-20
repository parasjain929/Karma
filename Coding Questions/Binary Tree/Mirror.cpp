#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
};
int mirror(node *root1,node *root2)
{
    if((root1==NULL) && (root2==NULL))
        return 1;
    if((root1==NULL) || (root2==NULL))
        return 0;
    if(root1->data == root2->data)
    {
        if( mirror(root1->left,root2->right)
        && mirror(root1->right,root2->left))
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
        temp->data=7;
        root1->left=temp;

        node* temp1;
        temp1= new node();
        temp1->data=15;
        temp->left=temp1;

        temp=new node();
        temp->data=10;
        root1->right=temp;

        /*temp1=new node();
        temp1->data=17;
        temp->right=temp1;*/

         node* root2;
        root2 = new node();
        root2->data=5;


        temp= new node();
        temp->data=10;
        root2->left=temp;


        temp1= new node();
        temp1->data=7;
        root2->right=temp1;

        temp=new node();
        temp->data=15;
        temp1->right=temp;

        /*temp1=new node();
        temp1->data=17;
        temp->right=temp1;*/

       int c=mirror(root1,root2);
        cout<<c;


}
