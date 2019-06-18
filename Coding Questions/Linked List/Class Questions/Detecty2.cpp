#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data,flag=0;
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
void DetectY(node *list1,node *list2)
{
        node *temp;
        temp=list1;
        while(temp!=NULL)
        {
            temp->flag=1;
            temp=temp->next;
        }
        temp=list2;
        while(temp!=NULL)
        {
            if(temp->flag=1)
            {
                cout<<"Y DETECTED";
                return ;
            }
            temp=temp->next;
        }
        cout<<"Y not detected";

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
        Insertlist(&list2
                   ,v);
        n2--;
    }
    *list1->next=*list2->next->next;
    DetectY(list1,list2);


}
