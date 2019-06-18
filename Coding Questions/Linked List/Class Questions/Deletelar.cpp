#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
};
void insertlist(node **head1,int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=NULL;
    if(*head1==NULL)
    {
        *head1=temp;
        return ;
    }
     node *last_node=*head1;
    while(last_node->next!=NULL)
        last_node=last_node->next;
    last_node->next=temp;
    return;
}
int findmax(node *maxx)
{
    int max1=INT_MIN;
    while(maxx!=NULL)
    {
        if(max1<maxx->data)
        {
            max1=maxx->data;
        }
        maxx=maxx->next;
    }
    return max1;
}
void print (node *head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<endl;
        head=head->next;
    }
}
void deletelarger(node *h1)
{
    node * current=h1,*newlist=NULL;
    int temp;
    while(current!=NULL)
    {
        temp = findmax(current->next);
        if (temp<current->data)
            insertlist(&newlist,current->data);
        current=current->next;
     }
     print(newlist);
}
int main()
{
        int n,v;
        node *head=NULL;
        cout<<"Enter No. of Values";
        cin>>n;
        while(n)
        {
            cout<<"Enter values";
            cin>>v;
            insertlist(&head,v);
            n--;
        }
        cout<<"Entered linkelist"<<endl;
        print(head);
        cout<<endl<<"Updated linked list"<<endl;
        deletelarger(head);
}
