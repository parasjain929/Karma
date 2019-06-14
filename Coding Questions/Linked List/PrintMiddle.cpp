#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
void insert(node**, int);
void print(node *,int c);
int main()
{
    node *head =NULL;
    int n,c=0;
    cout<<"Enter No. of Values you want to insert";
    cin>>n;
    while(n)
    {
        int value;
        cout<<"Enter Values you want to insert";
        cin>>value;
        insert(&head,value);
        c++;
        n--;
    }
    print(head,c);
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
void print (node *head, int c)
{
    c=c/2;
    int k=0;
    while(head!=NULL)
    {
        if(k==c)
            cout<<"Middle Element is"<<(head->data)<<endl;
        head=head->next;
        k++;
    }
}
