#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data,data1;
    node *next;
};
void ins(node **head,int v,int v1)
{
    node *temp=new node();
    temp->data=v;
    temp->data1=v1;
    temp->next=NULL;

    if(*head==NULL)
    {
        *head=temp;
        return ;
    }
    node *prev=*head;
    while(prev->next!=NULL)
        prev=prev->next;
    prev->next=temp;
    return ;
}
void print(node *head)
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" "<<t->data1<<" ";
        t=t->next;
    }
    cout<<endl;
    return ;
}
int main()
{
    node *head=NULL,*h2=NULL,*head1=NULL;
    ins(&head,5,4);
    ins(&head,2,2);
    ins(&head,1,0);
    ins(&head1,3,3);
    ins(&head1,10,2);
    ins(&head1,5,1);
    print(head);
    print(head1);
    node *t1=head,*t2=head1;
    while(t1!=NULL&&t2!=NULL)
    {
        if(t1->data1>t2->data1)
        {
            ins(&h2,t1->data,t1->data1);
            t1=t1->next;
        }
        else if(t1->data1<t2->data1)
        {
            ins(&h2,t2->data,t2->data1);
            t2=t2->next;
        }
        else
        {
            ins(&h2,t2->data+t1->data,t2->data1);
            t1=t1->next;
            t2=t2->next;
        }
    }
    while(t1!=NULL)
    {
        ins(&h2,t1->data,t1->data1);
        t1=t1->next;
    }
    while(t2!=NULL)
    {
        ins(&h2,t2->data,t2->data1);
            t2=t2->next;
    }
    print(h2);
    return 0;
}
