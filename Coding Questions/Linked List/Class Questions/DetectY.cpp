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
void DetectY(node *h1,node *h2)
{
        node *l1,*l2;
        l1=h1;
        l2=h2;
        while(l1!=NULL)
        {
            l2=h2;
            while(l2!=NULL)
            {
                if((l1)==(l2))
                {
                    cout<<"Y detected";
                    return ;
                }
                l2=l2->next;
            }
            l1=l1->next;
        }
        cout<<"NO Y Detected";
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
    *list1->next=*list2->next->next;
    DetectY(list1,list2);


}
