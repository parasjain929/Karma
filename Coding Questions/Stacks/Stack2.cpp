#include<bits/stdc++.h>
#include<stack>
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
node* Reverse(node *head)
{
    stack <node*>s;
    node *temp=head;
    while(temp->next!=NULL)
    {
        s.push(temp);
        temp=temp->next;
    }
    head=temp;
    while(!s.empty())
    {
        temp->next=s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}
int main()
{
        int n,v;
        node *head=NULL,*print1;
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
        print1=Reverse(head);
        cout<<"Reverse List Is"<<endl;
        print(print1);
}


