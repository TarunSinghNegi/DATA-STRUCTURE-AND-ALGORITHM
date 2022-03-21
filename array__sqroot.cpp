#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sqroot(int a)
{
   int e = a;
   int s = 0;
   long long int  ans = 0;

   while (s <= e)
   {
   long long int mid = s + (e - s) / 2;
   long long int square = mid * mid;
      if (square == a)
      {
         return mid;
      }
      else if (square > a)
      {

          e = mid - 1;
      }
      else
        
         {
             s = mid + 1;
             ans = mid;
         }
      mid = s + (e - s) / 2;
   }
   return ans;
}
double precise(int a,int p,  int answer)
{
   double fac=1;
   double ans = answer;
   for(int i=0;i<p;i++)
   {
       fac=fac/10;
      for(double j=ans;j*j<a;j=j+fac)
      {
        ans = j;
      }
   }
   return ans;
}
int main()
{
   long long int a = 7;
   int answer = sqroot(a);
   cout << answer << endl;
   cout<<precise(a,14,answer)<<endl;
   return 0;
}