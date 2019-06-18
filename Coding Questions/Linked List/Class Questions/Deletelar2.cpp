#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
void ins(node **head,int val)
{
    node *temp=new node();
    temp->data=val;
    temp->next=NULL;
    if(*head==NULL)
    {
        *head=temp;
        return ;
    }
    node *last=*head;
    while(last->next!=NULL)
        last=last->next;
    last->next=temp;
    return ;
}
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void rev(node **head)
{
    node *pre=NULL,*current=*head,*right=(*head)->next;
    while(current!=NULL)
    {
        right=current->next;
        current->next=pre;
        pre=current;
        current=right;
    }
    *head=pre;
}
void del(node **head)
{
    node *p,*t=*head;
    while(t->next!=NULL)
    {
        if(t->next->data>=t->data)
            t=t->next;
        else
        {
            p=(t)->next;
            t->next=t->next->next;
            delete(p);
        }
    }
    return ;
}
int main()
{
    int c,n;
    node *head=NULL;
    while(1)
    {
        cout<<"enter choice"<<endl;
        cin>>c;
        switch(c)
        {
            case 1:
                cout<<"Enter value"<<endl;
                cin>>n;
                ins(&head,n);
                break;
            case 2:
                print(head);
                break;
            case 3:
                rev(&head);
                break;
            case 4:
                del(&head);
                break;
            default:
                exit(0);
        }
    }
    return 0;
}
