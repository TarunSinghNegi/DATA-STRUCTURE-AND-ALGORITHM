#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int add(int a[][4],int r,int c)
{ int sum=0;
int max=INT_MIN;
int rowindex;
    for(int i=0;i<r;i++)
{  
    sum=0;
    for(int j=0;j<c;j++)
    {
        sum+=a[i][j];
      
    }
    cout<<"ROW "<<i<<" sum is "<<sum<<endl;
    cout<<endl;
    //FOR FINDING ROW HAVINDG MAXIMUM SUM //
    if(max<sum)
    {
        max=sum;
        rowindex=r;
    }
}
cout<<"MAXIMUM ROW SUM IS "<<max<<endl;
cout<<"the row index is "<<rowindex<<endl;
}
int main()
{
int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
int row=3,col=4;

for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
add(arr,row,col);
return 0 ;
}