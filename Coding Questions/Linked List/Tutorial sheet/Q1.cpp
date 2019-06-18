#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void Insertlist(node **head1,int value)
{
    node *temp=new node;
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
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<endl;
        head=head->next;
    }
}
void Sumgreater(node *h1,node *h2)
{
        node *l1,*l2, *newlist=NULL;
        l1=h1;
        l2=h2;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->data>l2->data)
                Insertlist(&newlist,l1->data);
            else
                Insertlist(&newlist,l2->data);
            l1=l1->next;
            l2=l2->next;
        }
        print(newlist);
}

int main()
{
    int n1,n2,v;
    cout<<"Enter no. of values list 1";
    cin>>n1;
    node *list1=NULL;
    while(n1)
    {
        cout<<"Enter Value";
        cin>>v;
        Insertlist(&list1,v);
        n1--;
    }
    cout<<"Enter no. of values list 2";
    cin>>n2;
    node *list2=NULL;
    while(n2)
    {
        cout<<"Enter Value";
        cin>>v;
        Insertlist(&list2,v);
        n2--;
    }
    Sumgreater(list1,list2);


}
