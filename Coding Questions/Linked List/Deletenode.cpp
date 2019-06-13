#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void print (node *head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<endl;
        head=head->next;
    }
}

void insert(node**head1,int value)
{
    node *temp=new node;
    temp->data=value;
    temp->next=NULL;
    if(*head1==NULL)
    {
        *head1=temp;
        return;
    }
    node * last_node= *head1;
    while(last_node->next!=NULL)
    {

        last_node=last_node->next;
    }
    last_node->next=temp;
    return ;

}
void del(node ** headptr, int key)
{
    node *temp=*headptr;
    if(temp->data==key)   //element at first
    {
        *headptr=temp->next;
        delete(temp);
        return ;
    }
    node *prev=temp;
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Key Not Found"<<" ";
        return ;
    }
    prev->next=temp->next;  //last element
    delete(temp);
    return;
}
int main()
{
        int n,k;
        cout<<"Enter no. of Values you want to Insert in list";
        cin>>n;
        node *head=NULL;
        while(n)
        {
            int v;
            cout<<"Enter Value"<<n<<" ";
            cin>>v;
            insert(&head,v);
            n--;


        }
        cout<<"Entered Values Are"<<endl;
        print(head);
        cout<<"Enter Key Value You Want To Delete ";
        cin>>k;
        del(&head,k);
        cout<<"Updated Values Are"<<endl;
        print(head);
}

