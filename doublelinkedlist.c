#include <stdio.h>
#include <stdlib.h>
struct node
{
   struct node *prev;
   int info;
   struct node *next;
};
struct node *find(struct node **s, int data)
{
   struct node *p;
   if (*s == NULL)
   {
      return 0;
   }

   else
   {
      p = *s;
      while (p->next != NULL)
      {
         if (p->info == data)
         {
            return p;
         }
         p = p->next;
      }
      return 0;
   }
}
void insertlastnode(struct node **s, int data)
{
   struct node *end, *t;
   end = (struct node *)malloc(sizeof(struct node));
   end->info = data;
   end->next = NULL;

   if (*s == NULL)
   {
      end->prev = NULL;
      *s = end;
   }
   else
   {
      t = *s;
      while (t->next != NULL)
      {
         t = t->next;
      }
      end->prev = t;
      t->next = end;
   }
}
// struct node * insertstartnode(struct node *start, int data)
// {
//    // if(head==NULL)
   

   
//    //else{
//    struct node *p;
//    p = (struct node *)malloc(sizeof(struct node));
//    p->info = data;
//    p->prev = NULL;
//    p->next = start;
//    start = p;
//    return start;
// }

void insertafternode(struct node **s, struct node *ptr, int data)
{
   struct node *p;
   p = (struct node *)malloc(sizeof(struct node));
   p->info = data;
   if (ptr->next == NULL)
   {
      p->prev = ptr;
      p->next = ptr->next;
      ptr->next = p;
   }
   else
   {
      p->prev = ptr;
      p->next = ptr->next;
      ptr->next->prev = p;
      ptr->next = p;
   }
   
}

int  deletefirstnode(struct node **s)
{
   struct node *t;
   t = *s;
   if (*s == NULL)
   {
      printf("THERE IS NOTHING IN THE LIST BRO\n");
      return 0;
   }
   else
   {
      *s = (*s)->next;
      (*s)->prev = NULL;
      free(t);
      return 1;
   }
}

int deletelastnode(struct node **s)
{
   struct node *t;
   if (*s == NULL)
   {
      printf("THERE IS NOTHING IN THE LIST BRO\n");
      return 0;
   }
   else
   {
      t = *s;
      while (t->next != NULL)
      {
         t = t->next;
      }
         if ((*s)->next == NULL)
         {
            *s = NULL;
         }
         else
            t->prev->next = NULL;
         free(t);
         return 1;
      
   }
}

int deleteintermediatenode(struct node **s, struct node *ptr)
{
   if (*s == NULL)
   {
      return 0;
   }
   if (ptr->prev == NULL & ptr->next == NULL)
   {
      *s = NULL;
      free(ptr);
      return 1;
   }
   if (ptr->prev == NULL)
   {
      *s = ptr->next;
      ptr->next->prev = NULL;
      free(ptr);
      return 1;
   }
   if (ptr->next == NULL)
   {
      ptr->prev->next = NULL;
      free(ptr);
      return 1;
   }
   else
   {
      ptr->prev->next = ptr->next;
      ptr->next->prev = ptr->prev;
      free(ptr);
      return 1;
   }
}

void veiwlist(struct node **s)
{
   if (*s == NULL)
   {
      printf("THERE IS NO LIST\n");
   }
   else
   {
      struct node *t;
      t = *s;
      while (t != NULL)
      {
         printf("DATA = %d\n", t->info);
         printf("prev = %d\n", t->prev);
         printf("next = %d\n", t->next);
         t = t->next;
      }
   }
}

int getfirst(struct node **s)
{
   if (*s == NULL)
   {
      printf("THERE IS NO LIST\n");
      return (-1);
   }

   return ((*s)->info);
}

int getlast(struct node **s)
{
   if (*s == NULL)
   {
      printf("THERE IS NO LIST\n");
      return (-1);
   }
   else
   {
      struct node *t;
      t = *s;
      while (t->next != NULL)
      {
         t = t->next;
      }

      return (t->info);
   }
}


/*void sort(struct node **s)
{
   struct node *t;
   if()

}*/

int main()
{
   struct node *start = NULL;
   struct node *ptr;

   //insertstartnode(&start, 10);
   // insertlastnode(&start, 20);
   // ptr = find(&start, 10);
    insertafternode(&start, ptr, 30);
   // insertstartnode(&start, 40);
   // deleteintermediatenode(&start,find(&start,30));
   // printf("THE FIRST VALUE IS %d\n", getfirst(&start));
   // printf("THE LAST VALUE IS %d\n", getlast(&start));
   //deletefirstnode(&start);
   //deletelastnode(&start);
   veiwlist(&start);
   // sort(&start);
   

   return 0;
}
