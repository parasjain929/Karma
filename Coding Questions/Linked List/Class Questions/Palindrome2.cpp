#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void insertlist(node **head1, int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=NULL;
    if(*head1==NULL)
    {
        *head1=temp;
        return;
    }
    node *last_node=*head1;
    while(last_node->next!=NULL)
    {
        last_node=last_node->next;
    }
    last_node->next=temp;
    return ;

}
void printMiddle(node *head,node **p1)
{
    node *p2=head;
    *p1=head;
    if(head !=NULL)
    {
        while(p2!=NULL && p1!=NULL && p2->next!=NULL)
        {
            *p1=(*p1)->next;
            p2=p2->next->next;
        }
    }
}
void ReverseList(node **p1)
{
    node *prev=NULL,*current=*p1,*right=(*p1)->next;
    while(current!=NULL)
    {
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }
    *p1=prev;

}
void ispalindrome(node *head, node*p1)
{
    while(p1!=NULL)
    {
        if((head->data)!=(p1->data))
        {
            cout<<"NOT A PALINDROME";
            return;
        }
        p1=p1->next;
        head=head->next;
    }
    cout<<"PALINDROME";

}
void print (node *head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<endl;
        head=head->next;
    }
}

int main()
{

    int n,v;
    cout<<"Enter no. of Values"<<endl;
    cin>>n;
    node *head=NULL,*p1=NULL;
    while(n)
    {
            cout<<"Enter value";
            cin>>v;
            insertlist(&head,v);
            n--;
    }
    print(head);
    cout<<endl;
    printMiddle(head,&p1);
    ReverseList(&p1);
    print(head);
    ispalindrome(head,p1);
}
