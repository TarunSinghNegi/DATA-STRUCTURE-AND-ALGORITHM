#include <iostream>
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
void insertatposition(Node *&head, int position, int d)
{
    Node *t = head;
    int count = 1;
    if (position < count)
        insertathead(head, d);

    else
    {
        while (count < position - 1)
        {
            t = t->next;
            count++;
        }
        if (t->next == NULL)
        {
            insertattail(head, d);
        }
        else
        {
            Node *node4 = new Node(d);
            node4->next = t->next;
            t->next = node4;
        }
    }
}

Node *deletenode(int position, Node *&head)
{
    // if(head==NULL)
    // printf("nothing is in list");

    if (position == 1)
    {
        Node *t = head;
        head = head->next;
        t->next = NULL;
        delete t;
    }
    else
    {
        Node *t = head;
        int count = 1;
        while (count < position - 1)
        {
            t = t->next;
            count++;
        }

        t->next = t->next->next;
        t = t->next;
        t->next = NULL;
        delete t;
    }
    return head;
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

void middle(Node *&head)
{
    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    cout << slow->data;
}
Node *kreverse(Node *&head, int k)
{
    //BASE CASE
    if (head == NULL && head->next == NULL)
    {
        printf("defeat is your chance");
        return 0;
    }

    else
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *forw = NULL;
        int count = 0;
        while (curr != NULL && count < k)
        {
            head = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
            count++;
        }

        if(forw!=NULL)
        {
            head->next=kreverse(forw,k);
        }
        printf("defeat is your chance");
        
        return (prev);
    }
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
    Node *node1 = new Node(43);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node *head = node1;
    display(head);
    insertathead(head, 56);
    display(head);
   // insertattail(head, 65);
    //display(head);

    insertatposition(head, 0, 26);
    insertatposition(head, 0, 26);
    insertatposition(head, 0, 26);
    display(head);
    insertatposition(head, 5, 2);
    display(head);
    //insertatposition(head, 3, 3);
    // insertatposition(head, 3, 4);

    //  deletenode(3,head );
    // display(head);
     reversenode(head) ;
    //display(head);
    // middle(head);
    // display(head);
    // cout<<head->data<<endl;
    // kreverse(head,3);
     display(head);
    //cout<<head->data<<endl;

    return 0;
}