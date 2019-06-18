#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void insertlist(node **head1, int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=NULL;
    if(*head1 == NULL)
    {
        *head1=temp;
        return ;
    }
    node *last_node=*head1;
    while(last_node->next!=NULL)
    {
        last_node=last_node->next;
    }
    last_node->next=temp;
    return;
}
int kthnode(node *head, int k)
{
    int c=0;
    node *find=head;
    while(find!=NULL)
    {
        if(k==c)
        {
            return find->data;
        }
        find=find->next;
        c++;
    }
}
void ispalindrome(node *head,int a)
{
    int begin=0,end=a;
    while(begin<end)
    {
        if((kthnode(head,begin))!=(kthnode(head,end)))
        {
            cout<<"NOT A PALINDROME";
            return;
        }
        begin++;
        end--;
    }
    cout<<"PALINDROME";
}
int main()
{

    int n,v,a;
    node *head=NULL;
    cout<<"Enter no. of Values you want to enter"<<endl;
    cin>>n;
    a=n-1;//count
    while(n)
    {
        cout<<"enter value"<<endl;
        cin>>v;
        insertlist(&head,v);
        n--;
    }
    ispalindrome(head,a);
}
