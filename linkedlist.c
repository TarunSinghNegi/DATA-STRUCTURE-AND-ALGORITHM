// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int info;
//     struct node *link;
// };
// struct node *START = NULL;
// struct node *createnode()
// {
//     struct node *n;
//     n = (struct node *)malloc(sizeof(struct node));
//     return n;
// }
// void insertnode()
// {
//     struct node *temp;
//     printf("ENTER A NUMBER\n");
//     scanf("%d", &temp->info);
//     temp->link = NULL;

//     if (START==NULL)
//     {
//         START = temp;
//     }
//     else
//     {
//         struct node *t;
//         t = START;
//         while (t != NULL)
//         {
//             t = t->link;
//         }
//         t->link = temp;
//     }
//     return *START;
// }

// void deletenode()
// {
//     if (START == NULL)
//     {
//         printf("THIS LIST IS EMPTY\n");
//     }
//     else
//     {
//         struct node *r;
//         r = START;
//         START = START->link;
//         free(r);
//     }
// }

//  void reversing()
// {
//     struct node *t1 = NULL ;
//     struct node *t2 = NULL ;
//     while(START!=NULL)
//     {
//         t2 = START->link;
//         START->link = t1;
//         t1 = START;
//         START=NULL;
         
//     }
   

     
// }

// void veiwlist()
// {
//     if (START == NULL)
//     {
//         printf("THIS LIST IS EMPTY\n");
//     }
//     else
//     {
//         struct node *k;
//         k = START;
//         while (k != NULL)
//         {
//             printf("%d", k->info);
//             k = k->link;
//         }
//     }
// }

 
// int main()
// {
//     int ch;
//     printf("1. ENTER TO PUT VALUE IN LIST\n");
//     printf("2. ENTER TO DELETE STARTING NODE\n");
//     printf("3. ENTER TO VIEW LIST\n");
//     printf("4. ENTER TO EXIT FROM LIST\n");
//     printf("ENTER YOUR CHOICE\n");
//     scanf("%d", &ch);
    
    
//         switch (ch)
//         {
//         case 1:
//             insertnode();
//             break;

//         case 2:
//             deletenode();
//             break;

//         case 3:
//             veiwlist();
//             break;

//         case 4:
//             exit(0);
//             break;

//         default:
//             printf("INVALID INPUT\n");
//         }
    

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int info;
//     struct node *link;
// };
// struct node *START = NULL;

// struct node* insertnode(struct node *START,int info)
// {
//     struct node *temp=(struct node *)malloc(sizeof(struct node));

//     temp->info=info;
//     temp->link = NULL;

//     if (START==NULL)
//     {
//         START = temp;
//     }
//     else
//     {
//         struct node *t;
//         t = START;
//         while (t != NULL)
//         {
//             t = t->link;
//         }
//         t->link = temp;
//     }
//     return START;
// }
// void display(struct node* START)
// {
//     if(START=NULL)
//     printf("KUCH NAHI H YHAH");
//     else
//     {
//         struct node *t=START;
//         while(t->link!=NULL)
//         {
//             printf("%d\n",t->info);
//             t=t->link;

//         }

//     }

// }

// void main()
// {
//     struct node *START=NULL;
//     printf(" tarun is negi\n"); 
//     insertnode(START,10);
//     insertnode(START,20);
//     printf(" tarun is negi\n");
//     display(START);
// }


#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
   struct node* next;
};
// struct node *createnode(struct node * &START,int data)
// {
//     struct node *t=malloc(sizeof(struct node ));
//     t->data=data;
//     t->next=NULL;
//     return t;

// }
struct node * insert(struct node* &head,int data)
{
    struct node *t=malloc(sizeof(struct node ));
    t->data=data;
    t->next=NULL;
    if(head==NULL)
    {
      head=t;
      printf("gret");
      printf("%d",t->data);
    }
    else
    {
        struct node *k;
        k=head;
        while(k->next!=NULL)
        {
            k=k->next;
        }
        k->next=t;
    }
    
      return head;
}
void display(struct node * &head)
{
    struct node *t;
    t=head;
    while(t!=NULL)
    {
        printf("%d",t->data);
        t=t->next;
    }
}
int main()
{
    struct node *head=NULL;
    insert(head,45);
    display(head);
    insert(head,5);
    display(head);
    

return 0;
}