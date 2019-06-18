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
void Sumg(node *h1)
{
        node *l1;
        l1=h1;
        int sum=0;
        while(l1->next!=NULL)
        {
            if(l1->data>l1->next->data)
                sum+=l1->data;
            l1=l1->next;
        }
        if(l1->data>h1->data)
            sum+=l1->data;
        cout<<sum;
}

int main()
{
    int n1,v;
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


    Sumg(list1);


}
