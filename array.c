#include<stdio.h>
#include<stdlib.h>
struct array
{
    int total_size,used_size;
    int *ptr;

};
void create(struct array * a,int tsize,int usize)
{
    a->used_size=usize;
    a->total_size=tsize;
    a->ptr=(int *)malloc(tsize*sizeof(int));
    
}
void put(struct array * a)
{
    for(int i=0;i<a->used_size;i++)
    {
        printf("ENTER THE DATA\n");
        scanf("%d", &a->ptr[i]);
    }
}

void display(struct array * a)
{
    printf("the data in array is\n");
    for(int i=0;i<a->used_size;i++)
    {
      printf("%d  ", a->ptr[i]);
    }
}

void traverse(struct array *a)
{
    printf("the data in array is\n");
    for(int i=0;i<a->used_size;i++)
    {
      printf("%d\n", a->ptr[i]);
    }

}



void insert(struct array *a)
{
 
}

int main()
{
struct array marks;
create(&marks,4,2);
put(&marks);
display(&marks);
traverse(&marks);
return 0;
}