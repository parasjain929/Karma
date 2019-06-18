#include<bits/stdc++.h>
using namespace std;
class node
{
    public:

    int data,data1;
    node *next;
};
void inse(node **head,int v,int v1)
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
        cout<<t->data<<" "<<t->data1<<endl;
        t=t->next;
    }
    cout<<endl;
    return ;
}
void multi(node *h1, node *h2)
{
    node *l1=h1;
    node *l2=h2;
    node *newlist=NULL,*new2=NULL;
    while(l1!=NULL)
    {
        l2=h2 ;
        while(l2!=NULL)
        {
            inse(&newlist,(l1->data)*(l2->data),(l1->data1)+(l2->data1));
            l2=l2->next;
        }
        l1=l1->next;
    }
     while(newlist->next!=NULL)
    {
        if(newlist->data1==newlist->next->data1)
        {
                inse(&new2,newlist->data+newlist->next->data,newlist->data1);
                newlist=newlist->next->next;
        }
        else
        {
            inse(&new2,newlist->data,newlist->data1);
            newlist=newlist->next;
        }
    }
    inse(&new2,newlist->data,newlist->data1);
    print(new2);

}
int main()
{
    node *head =NULL;
    int n,sum=0;
    cout<<"Enter No. of Values you want to insert";
    cin>>n;
    while(n)
    {
        int value1,value2;
        cout<<"Enter Values you want to insert";
        cin>>value1>>value2;
        inse(&head,value1,value2);
        n--;
    }
    node *head2 =NULL;
    int n1;
    cout<<"Enter No. of Values you want to insert";
    cin>>n1;
    while(n1)
    {
        int value1,value2;
        cout<<"Enter Values you want to insert";
        cin>>value1>>value2;
        inse(&head2,value1,value2);
        n1--;
    }
    multi(head,head2);

}
