#include<stdio.h>
#include<stdlib.h>
void bin(n, char A[])
{
  if(n<1)
  {
      printf("%s", A);
  }
  else
      A[n-1] = '0';
      bin(n-1,  A);
      A[n-1] = '1';
      bin(n-1,  A);
  
}
int main()
{
   void bin(10,char A[]);
    char A[10];
    bin(10, A);


return 0
}