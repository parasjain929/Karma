#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
void insert(node**, int);
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node *head =NULL;
    int n;
    cout<<"Enter No. of Values you want to insert";
    cin>>n;
    while(n)
    {
        int value;
        cout<<"Enter Values you want to insert";
        cin>>value;
        insert(&head,value);
        n--;
    }
    node *a=head;
    while(a->next!=NULL)
    {
        a=a->next;
    }
    a->next=head;
    print(a);
}
void insert(node **head1, int value)
{
        node*temp=new node();
        temp->data=value;
        temp->next=NULL;
        if(*head1 == NULL)
        {
            *head1=temp;
            return;
        }
        node*last_node=*head1;
        while(last_node->next!=NULL)
        {
            last_node=last_node->next;
        }
        last_node->next=temp;
        return ;
}
