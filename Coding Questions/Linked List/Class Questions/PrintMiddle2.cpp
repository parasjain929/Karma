#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
void insert(node**, int);
void printMiddle(node *);
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
    printMiddle(head);
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
void printMiddle(node *head)
{
    node *p1=head,*p2=head;
    if(head!=NULL)
    {
        while(p1!=NULL && p2->next!=NULL && (p2->next)->next!=NULL)
        {
            p1=p1->next;
            p2=p2->next->next;
        }
            cout<<p1->data;
    }
}
