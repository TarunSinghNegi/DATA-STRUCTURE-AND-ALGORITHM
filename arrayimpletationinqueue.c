#include<stdio.h>
#include<stdlib.h>
struct arrayqueue
{
 int front,rear, capacity;
 int *array;
};
struct arrayqueue* create(int capacity)
{  
struct arrayqueue* Q=malloc(sizeof(struct arrayqueue));
Q->capacity=capacity;
Q->front=Q->rear=-1;
Q->array=malloc(capacity*sizeof(int));
if(!Q->array)
return (NULL);
return (Q);
}
struct arrayqueue *put_data_in_empty(struct arrayqueue *Q,int data)
{
   Q->array[Q->front]=data;
   Q->front= Q->front+1;
}
int isempty(struct arrayqueue *Q)
{
    if(Q->front==-1)
    return 1;
    return 0;
}

int isfull(struct arrayqueue *Q)
{
    return(Q->rear+1%Q->capacity==Q->front);
}

int size(struct arrayqueue *Q)
{
    return(Q->capacity-Q->front+Q->rear+1%Q->capacity);
}
int delete(struct arrayqueue *Q)
{
    int data=-1;
    if(isempty(Q))
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
     data = Q->array[Q->front];
     if(Q->front==Q->rear)
      Q->front=Q->rear=-1;
     else
     Q->front=(Q->front+1)%Q->capacity;
    }
    return data;
}

void deleteall(struct arrayqueue *Q)
{
    if(Q)
    {
        if(Q->array)
        {
            free(Q->array);
        }
        free(Q);
    }
}
int main()
{    
    int choice,data,cap;
     printf("enter the capacity of int you want to be in array \n");
     scanf("%d",&cap);

     struct arrayqueue *Q;
       Q=create(cap);
       printf("1. TO DELETE\n");
       printf("2. TO DELETEALL\n");
       printf("3. TO SEE SIZE OF ARRAY\n");
   while(1)
   {
       printf("ENTER YOUR CHOICE MAN\n");
       scanf("%d",&choice);
       
       switch(choice)
   {
       case 1:
       printf("ENTER DATA\n");
       scanf("%d", &data);
       push(stack,data);
       break;

       case 2:
       data = pop(stack);
       if(data==-1)
        printf("STACK IS EMPTY\n");
        else
        printf(" %d IS THE POPED VALUE\n", data);
        break;

       case 3:
       return 0;
       break;

       default :
       printf("INVALID ARGUMENT\n"); 

   }
   getchar;
     } 
 
return 0;
}
