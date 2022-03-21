#include<stdio.h>
// int sum(int a)
// {
//     int k = 0 ;
//     while(a>=1)
//     {
//         k += a;
//         a--; 
//     }

//     return k;

// }
int sum(int a)
{
    int s = 0;
    if(a==1)
    return 1;
    else {  
    s = s +sum(a-1);
    return s; 
    }

}

 int main()
{
    int a;
    scanf("%d", &a);
     int k =sum(a);
    printf("%d", k);
}