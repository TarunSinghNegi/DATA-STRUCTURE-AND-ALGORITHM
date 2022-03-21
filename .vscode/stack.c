#include<stdio.h>
#include<stdlib.h>
#include<Conio.h>
struct ArrayStack
{
  int top;
  int capacity;
  int *array;
};

struct ArrayStack *create(int cap)
{
    struct ArrayStack *stack;
    stack = (struct ArrayStack*)malloc(sizeof(struct ArrayStack));
    stack->top=-1;
    stack->capacity=cap;
    stack->array=malloc(cap*sizeof(int));
    return (stack);
}

int isfull(struct ArrayStack *stack)
{
    if(stack->top==stack->capacity-1)
    return (1);
    else
    return (0);
} 

int isempty(struct ArrayStack *stack) 
{
    if(stack->top==-1)
        return (1);
    else
    return (0);
}

int push(struct ArrayStack *stack,int item)
{
    if(!isfull(stack))
    {
        stack->top++;
        stack->array[stack->top]=item;
           
    }
    else
    printf("STACK IS FULL\n");
}
int pop(struct ArrayStack *stack)
{
    int item;
    if(!isempty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return (item);
    }
    return (-1);
}
int main()
{  
     int choice,data,cap;
     printf("enter the capacity of int you want to be in array \n");
     scanf("%d",&cap);

     struct ArrayStack *stack;
      stack=create(cap);
       printf("1. TO PUSH\n");
       printf("2. TO POP\n");
       printf("3. TO EXIT\n");
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
