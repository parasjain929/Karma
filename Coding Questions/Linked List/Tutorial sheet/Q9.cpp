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
        cout<<t->data<<" "<<t->data1<<" ";
        t=t->next;
    }
    cout<<endl;
    return ;
}
int main()
{
    node *head =NULL;
    int n,x,sum=0;
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
    cout<<"Enter Value of x";
    cin>>x;
    node *eval=head;
    while(eval!=NULL)
    {
        sum=sum+(eval->data)*pow(x,eval->data1);
        eval=eval->next;
    }

        cout<<sum;

}
