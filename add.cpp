/*#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    //constructor to create new node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor to delete//
    ~Node()
    { //THIS IS TO DELETE A NODE SAMAJ NI AAYA PAR RATLE AUR KAR BHI KYA SAKTA H  TO BHAI THODA CPP MEIN HAATH THODA TANG H MERA TO RAT LE AUR KAREGA BHI BHI KYA TU BE ABHI KARLE FIR BAAD KI BAAD MEIN DEKHI JAYEGI OK BHAI//
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertathead(Node *&head, int d)
{
    Node *node0 = new Node(d);
    node0->next = head;
    head = node0;
}
void insertattail(Node *&head, int d)
{
    Node *node3 = new Node(d);
    node3->next = NULL;
    Node *temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->next = node3;
}


Node *reversenode(Node *&head)
{

     Node *prev=NULL;
     Node *curr = head;
     Node *forward=NULL;
     if(head==NULL && head->next==NULL)
     {
     return head;
     }
     else
     {
         while(curr!=NULL)
         {
           forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
         }
         head=prev;
         return head;
     }
}
void insertathead(Node *head,Node *tail,int value)
{    Node *temp;
     temp->data=value;
     temp=next
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        head=temp;
        tail=temp;
    }
}
Node *realsum(Node *&head, Node *&head1)
{
    Node *anshead=NULL;
    Node *anstail=NULL;
     int carry=0;
    Node *head3;
    Node *t=reverse(head);
    Node *k=reverse(head1);
    while(t!=NULL || k!=NULL || carry!=NULL)
    {   
        int val1=0;
        if(t!=NULL)
        val1=t->data;

        int val2=0;
        if(k!=NULL)
        val2=k->data;

        int sum=carry + val1 + val2;

        int  digit=sum%10;
        insertathead(anshead,anstail, digit)
         carry=sum/10;

        if(head!=NULL)
        t=t->next;
        if(k!=NULL)
        k=k->next;
    
    }
    return anshead;
}
Node *add(Node *&head, Node *&head1)
{
    Node *t=reverse(head);
    Node *k=reverse(head1);

    Node *ans=realsum(t,k);

}


void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(4);
    Node *node2 = new Node(2);
    

    Node *head = node1;
    Node * head1 = node2;
    insertathead(head, 5);
    
   // insertattail(head, 65);
    //display(head);

    insertatposition(head, 0, 6);
    insertatposition(head, 0, 6);
    insertatposition(head, 0, 2);
    insertatposition(head1, 0, 2);
    insertatposition(head1, 0, 3);
    insertatposition(head1, 0, 2);
    display(head);
    display(head1);
    

    
    

    return 0;
}*/

#include<iostream>
using namespace std;
class solution
{
    private :
    Node* reverse(Node *&head)
    {
        {

     Node *prev=NULL;
     Node *curr = head;
     Node *forward=NULL;
     if(head==NULL && head->next==NULL)
     {
     return head;
     }
     else
     {
         while(curr!=NULL)
         {
           forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
         }
         head=prev;
         return head;
     }
}
void insertathead(Node *head,Node *tail,int value)
{    Node *temp;
     temp->data=value;
     temp=next
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        head=temp;
        tail=temp;
    }
}
    Node *anshead=NULL;
    Node *anstail=NULL;
     int carry=0;
    Node *head3;
    Node *t=reverse(head);
    Node *k=reverse(head1);
    while(t!=NULL || k!=NULL || carry!=NULL)
    {   
        int val1=0;
        if(t!=NULL)
        val1=t->data;

        int val2=0;
        if(k!=NULL)
        val2=k->data;

        int sum=carry + val1 + val2;

        int  digit=sum%10;
        insertathead(anshead,anstail, digit)
         carry=sum/10;

        if(head!=NULL)
        t=t->next;
        if(k!=NULL)
        k=k->next;
    
    }
    return anshead;
}
    public :
    Node* addtwonumbers(Node *&first,Node *&second)
    {
        Node *f=reverse(first);
        Node *s=reverse(second);

        Node *ans=add(f,s);

        ans=reverse(ans);
        return ans;
    }
};