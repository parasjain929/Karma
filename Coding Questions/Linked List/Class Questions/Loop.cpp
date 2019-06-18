#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void insertlist(node **head1,int value)
{
    node*temp=new node();
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
void findloop(node *head)
{
    node *p1=head,*p2=head;
        while(p2!=NULL && p1!=NULL)
        {
            if(p1==p2->next || p1==p2->next->next)
            {
                cout<<"LOOP";
                return ;
            }
            p1=p1->next;
            p2=p2->next->next;
        }
        cout<<"NOT A LOOP";
        return ;

}
int main()
{

    int n,v;
    cout<<"Enter No. of values";
    cin>>n;
    node *head=NULL;
    while(n)
    {
        cout<<"Enter  Value";
        cin>>v;
        insertlist(&head,v);
        n--;

    }
    node *tmp=head;
	while(tmp->next != NULL)
		tmp=tmp->next;
	tmp->next=head->next->next;

    findloop(head);
}
