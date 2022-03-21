#include <iostream>
#include<map>
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
    node0->next = NULL;
    head = node0;
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
void lockcircular(Node * &head)
{ 
  Node *t=head;
  while(t->next!=NULL)
  {
      t=t->next;
  }
   t->next=head->next;
   
   
}
                      //METHOD 1 TO DETECT LOOP IS LOCKED OR NOT//
bool detectloop(Node * &head)
{
        
    if(head==NULL)
    {
        cout<<"NOT DETECTED"<<endl;
        return false;
    }

    map<Node*,bool> visited; //map concept used here//
    Node * t=head;
    while(t!=NULL)
    {
        if(visited[t]==true)
        {
            cout<<"DETECTED WALLAH"<<endl;
            cout<<"PRESENT ON ELEMENT "<<t->data<<endl;
            return true;
        }
        visited[t]=true;
        t=t->next;
    }
    cout<<"NOT DETECTED"<<endl;
    return false;
}
                   //METHOD 2 ND TO DETECT LOOP IS LOCKED  OR NOT //
Node * floydddetectloop(Node* &head)
{  
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=slow)
        {
        fast=fast->next;
        }
        if(fast==slow)
        {
        cout<<"lock detected"<<endl;
        return slow;
        }
        slow=slow->next;
    }

    cout<<"not detected"<<endl;
   
     return NULL;

}
Node* getflloyddnode(Node *&head)
{
    Node *slow=head;
    Node * intersection=floydddetectloop(head);
     if(head==NULL)
     return NULL;
    while(slow!=intersection)
    {
        cout<<"chal raha h"<<endl;
        slow=slow->next;
        intersection=intersection->next;
    }
    cout<<"NODE IS "<<slow->data<<endl;
}
int main()
{
    Node *head=NULL;
    insertathead(head,5);
    insertathead(head,25);
    insertathead(head,15);
    insertathead(head,45);
    insertathead(head,35);
    display(head);
    lockcircular(head);
   //detectloop(head);
    floydddetectloop(head);
    getflloyddnode(head);


    
    return 0;

}