#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispresent(int a[][4],int t,int r,int c)
{
    for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if(a[i][j]==t)
      {
          cout<<"PRESENT AT - "<<i<<" row "<<j<<"coloumn"<<endl;
          return true;
      }
    }
    
  } 
  return false;
}
int main()
{
int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
int row=3,col=4;
// for(int i=0;i<row;i++)
// {
//     for(int j=0;j<col;j++)
//     {
//       cin>>arr[i][j];
//     }
// }

for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int target ;
cin>>target;
ispresent(arr,target,row ,col);

return 0 ;
}