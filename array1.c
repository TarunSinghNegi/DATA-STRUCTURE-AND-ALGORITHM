#include<stdio.h>
#include<stdlib.h>
void display(int arr[100],int size)
{
  for(int i=0;i<size;i++)
  {
      printf("%d  ", arr[i]);
  }
  printf("\n");
}
int insert(int arr[100],int size,int capacity,int index,int number)
{
  if(size>=capacity)
  {
    return -1;
  }
  else
  {
    for(int i=size-1;i>=index;i--)
    {
      arr[i+1]=arr[i];
    }
    arr[index]=number;
  }
  return 1;
}

void deletion(int arr[100],int size,int index)
{
  for(int i=index;i<(size-1);i++)
  {
    arr[i]=arr[i+1];
  }
  
} 
int main()
{
int arr[100]={1,3,5,9,11};
int size=5,capacity=100,number,index;
display(arr,size);
printf("enter the new number you want to put in array\n");
scanf("%d",&number);
printf("enter the index\n");
scanf("%d",&index);
insert(arr,size,capacity,index,number);
    size += 1;
display(arr,size);
printf("enter the index number you want to delete from array\n");
scanf("%d",&index);
deletion(arr,size,index);
  size -= 1;
display(arr,size);


return 0;
}