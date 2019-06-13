#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void insertlist(node **head1,int value)
{
    node *temp =new node();
    temp->data=value;
    temp->next=NULL;
    if(*head1==NULL)
    {
        *head1=temp;
        return ;
    }
    node *last_node=*head1;
    while(last_node->next!=NULL)
    {
        last_node=last_node->next;
    }
    last_node->next=temp;
    return ;
}
void print(node *head)
{
    node *print=head;
    while(print!=NULL)
    {
        cout<<(print->data)<<" ";
        print=print->next;
    }
}
void Reverse(node **headptr)
{
    node *prev=NULL,*current = *headptr,*right=(*headptr)->next;
    while(current!=NULL)
    {
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }
    *headptr=prev;
}
int main()
{
        int n,v;
        node *head=NULL;
        cout<<"Enter no. of Values";
        cin>>n;
        while(n)
        {
            cout<<"Enter Value"<<" ";
            cin>>v;
            insertlist(&head,v);
            n--;
        }
        cout<<"Entered List Is"<<endl;
        print(head);
        Reverse(&head);
        cout<<"Reverse List Is"<<endl;
        print(head);
}


