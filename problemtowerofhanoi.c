#include<stdio.h>
char TOH(int a, char begin, char aux , char end)
{   
    
    if(a>=1)
    {
       TOH(a-1,begin,end,aux);
       printf("%c to %c\n", begin,end);
       TOH(a-1,end,aux,begin);
    }

}
int main()
{  
    int a;
    char begin = 'A';
    char aux = 'B';
    char end = 'C';
    printf("ENTER THE NUMBER OF DISCS IN FIRST STICK\n");
    scanf("%d", &a);
    printf("SO THERE ARE %d DISCS\n\n", a);
    TOH(a,begin,aux,end);
    return 0;
}