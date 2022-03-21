#include<stdio.h>
#include<stdlib.h>
/*
int fact(int a)
{   int n = 1;
    if(a>0)
    {
        n = a*fact(a-1);
        return n;
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    int a;
    scanf("%d", &a);
    fact(a);
    printf("%d", fact(a));

  return 0;
}*/

//FIBONACCI SERIES//

long fib(int e)
{
    int a;
    if(e<=2)
    return 1;
    else
    return fib(e-1)+fib(e-2);
}

int main()
{
    int e;
    scanf("%d", &e);
    for(int i = 1 ; i<e;i++){
    printf("%d , ", fib(i));
    }
}