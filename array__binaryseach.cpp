#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int binarysearch(int array[],int size ,int digit)
{
  int start = 0;
  int end = size-1;
  while(start<=end)
  {
      int mid = start + (end-start)/2;  //int mid = (start+end)/2;
      if(array[mid]==digit)
      {
          return mid;
      }
      else
      {   
          //left side push
          if(array[mid]>digit){
          end=mid-1;}
          //right side push
          else
          start=mid+1;
      }
   }   
  return -1;
}


int main()
{
int arr[]={1, 2, 3, 4 ,5 ,6,9, 10, 14 ,16 ,19, 22, 23, 25 ,26 ,27 ,29, 31, 34, 35 ,36, 38, 39, 40, 45, 46, 48, 50, 51, 52, 57, 59, 60, 61, 67 ,68 ,69, 71 ,75 ,76, 77 ,79, 81, 82 ,83 ,86 ,87, 88, 90, 92, 93 ,94, 95, 96 ,98, 99, 100};
int n = sizeof(arr)/sizeof(arr[0]);

sort(arr , arr + n);//this is a sorting built in function//
cout<<"AFTER SORT {";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<",";
}cout<<"}";
cout<<endl;
 int index = binarysearch(arr,n,93);

 cout<<"THE INDEX OF SEARCHED DIGIT IS "<<index<<endl;

return 0 ;
}