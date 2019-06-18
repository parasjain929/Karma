#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void Insertfront(node **headptr,int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=*headptr;
    *headptr=temp;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<(head->data)<<endl;
        head=head->next;
    }
}
int main()
{
    int i,n;
    node *head=NULL;
    cout<<"enter Array Size";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        Insertfront(&head,a[i]);
    }
    print(head);
}
